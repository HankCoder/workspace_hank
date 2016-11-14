#include <stdio.h>  
#include <memory.h>  
#include <string>  
#include <iostream>  
using namespace std;  
  
//1������ͨ�ļ�2����Ŀ¼�ļ�0��ʾ���ļ�  
#define GENERAL 1  
#define DIRECTORY 2  
#define NULL 0  
  
struct FCB  
{  
    char fname[16]; //�ļ���  
    char type;      
    int size;    //�ļ���С  
    int fatherBlockNum;    //��ǰ�ĸ�Ŀ¼�̿��  
    int currentBlockNum;    //��ǰ���̿�  
  
    void initialize()  
    {  
        strcpy(fname,"/0");  
        type = NULL;  
        size =0;  
        fatherBlockNum = currentBlockNum = 0;  
    }  
};   
  
/*��������*/  
const char* FilePath = "C://myfiles";  
const int BlockSize = 512;       //�̿��С  
const int OPEN_MAX = 5;          //�ܴ������ļ���  
const int BlockCount = 128;   //�̿���  
const int DiskSize = BlockSize*BlockCount;    //���̴�С  
const int BlockFcbCount = BlockSize/sizeof(FCB);//Ŀ¼�ļ������FCB��  
  
int OpenFileCount = 0;  
  
struct OPENLIST      //�û��ļ��򿪱�  
{  
    int files;      //��ǰ���ļ���  
    FCB f[OPEN_MAX];    //FCB����  
    OPENLIST()  
    {  
        files=0;  
        for(int i=0;i<OPEN_MAX;i++){  
            f[i].fatherBlockNum=-1;//Ϊ�����  
            f[i].type=GENERAL;  
        }  
    }  
};  
  
/*-------------Ŀ¼�ļ��ṹ---------------*/  
struct dirFile  
{  
    struct FCB fcb[BlockFcbCount];  
    void init(int _FatherBlockNum,int _CurrentBlockNum,char *name)//����ţ���ǰ��ţ�Ŀ¼��  
    {  
        strcpy(fcb[0].fname,name); //�����FCB  
        fcb[0].fatherBlockNum=_FatherBlockNum;  
        fcb[0].currentBlockNum=_CurrentBlockNum;  
        fcb[0].type=DIRECTORY;     //���Ŀ¼�ļ�  
        for(int i=1;i<BlockFcbCount;i++){  
            fcb[i].fatherBlockNum=_CurrentBlockNum; //���Ϊ����  
            fcb[i].type=NULL;    // ���Ϊ�հ���  
        }  
    }  
};  
  
/**********************************************************************/  
struct DISK  
{  
    int FAT1[BlockCount];     //FAT1  
    int FAT2[BlockCount];     //FAT2  
    struct dirFile root;    //��Ŀ¼  
    char data[BlockCount-3][BlockSize];  
    void format()  
    {  
        memset(FAT1,0,BlockCount);     //FAT1  
        memset(FAT2,0,BlockCount);     //FAT2  
        FAT1[0]=FAT1[1]=FAT1[2]=-2; //0,1,2�̿�����δ���FAT1,FAT2,��Ŀ¼��  
        FAT2[0]=FAT2[1]=FAT2[2]=-2;  //FAT������  
        root.init(2,2,"C://");//��Ŀ¼��  
        memset(data,0,sizeof(data));//������  
    }  
};  
  
  
/*-----------------ȫ�ֱ���--------------------------*/  
FILE *fp;      //�����ļ���ַ  
char * BaseAddr;    //������̿ռ����ַ  
string currentPath="C://";   //��ǰ·��  
int current=2;    //��ǰĿ¼���̿��  
string cmd;      //����ָ��  
struct DISK *osPoint;    //���̲���ϵͳָ��  
char command[16];    //�ļ�����ʶ  
struct OPENLIST* openlist; //�û��ļ��б�ָ��  
  
/*-----------������������--------------------*/  
int  format();  
int  mkdir(char *sonfname);  
int rmdir(char *sonfname);  
int create(char *name);  
int listshow();  
int delfile(char *name);  
int changePath(char *sonfname);  
int write(char *name);  
int exit();  
int open(char *file);  
int close(char *file);  
int  read(char *file);  
/*------------��ʼ��-----------------------*/  
int format()  
{  
    current = 2;  
    currentPath="C://";   //��ǰ·��  
    osPoint->format();//���ļ��б��ʼ��  
    delete openlist;  
    openlist=new OPENLIST;  
    /*-------���浽������myfiles--------*/  
    fp = fopen(FilePath,"w+");  
    fwrite(BaseAddr,sizeof(char),DiskSize,fp);  
    fclose(fp);  
    printf("----------------------------------------------------------/n/n");  
    return 1;  
}  
  
/*-----------------------������Ŀ¼-------------------*/  
int  mkdir(char *sonfname)  
{  
    //�ж��Ƿ�������  
    //Ѱ�ҿհ���Ŀ¼��  
    //Ѱ�ҿհ��̿��  
    //��ǰĿ¼�����Ӹ���Ŀ¼��  
    //������Ŀ¼�̿飬���ҳ�ʼ��  
    //�޸�fat��  
    int i,temp,iFAT;  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
    /*--------Ϊ�˱����Ŀ¼��ͬ���ļ���--------*/  
    for(i = 1;i<BlockFcbCount;i++)  
    {  
        if(dir->fcb[i].type==DIRECTORY && strcmp(dir->fcb[i].fname,sonfname)==0 )  
        {  
            printf("���ļ������Ѿ���ͬ�����ļ��д�����!/n");  
            return 0;  
        }  
    }  
    //���ҿհ�fcb���  
    for(i=1;i<BlockFcbCount;i++)  
    {  
        if(dir->fcb[i].type==NULL)  
            break;  
    }  
  
    if(i==BlockFcbCount)  
    {  
        printf("��Ŀ¼����!��ѡ���µ�Ŀ¼�´���!/n");  
        return 0;  
    }  
  
    temp=i;  
  
    for(i = 3;i < BlockCount;i++)  
    {  
        if(osPoint->FAT1[i] == 0)  
            break;  
    }  
  
    if(i == BlockCount)  
    {  
        printf("��������!/n");  
        return 0;  
    }  
  
    iFAT=i;  
  
    /*-------------���������з���----------*/  
  
    osPoint->FAT1[iFAT]=osPoint->FAT2[iFAT] = 2;   //2��ʾ������¼�Ŀ¼�ļ�  
    //��д�÷����µ��̿�Ĳ���  
    strcpy(dir->fcb[temp].fname,sonfname);  
    dir->fcb[temp].type=DIRECTORY;  
    dir->fcb[temp].fatherBlockNum=current;  
    dir->fcb[temp].currentBlockNum=iFAT;  
    //��ʼ����Ŀ¼�ļ��̿�  
    dir=(struct dirFile*)(osPoint->data [iFAT-3]);   //��λ����Ŀ¼�̿��  
    dir->init (current,iFAT,sonfname);//iFAT��Ҫ����Ŀ�ţ������current����ָҪ����Ŀ�ĸ����  
    printf("---------------------------------------------------------------/n/n");  
    return 1;  
}  
  
  
/*-------ɾ����ǰĿ¼�µ��ļ���--------*/  
int rmdir(char *sonfname)  
{  
  
    int i,temp,j;//ȷ����ǰĿ¼���и��ļ�,����¼�¸�FCB�±�  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
  
    for(i=1;i<BlockFcbCount;i++)  
    {     //���Ҹ�Ŀ¼�ļ�  
        if(dir->fcb[i].type==DIRECTORY && strcmp(dir->fcb[i].fname,sonfname)==0)  
        {  
            break;  
        }  
    }  
  
    temp=i;  
  
    if(i==BlockFcbCount)  
    {  
        printf("��ǰĿ¼�²����ڸ���Ŀ¼!/n");  
        return 0;  
    }  
  
    j = dir->fcb[temp].currentBlockNum;  
    struct dirFile *sonDir;     //��ǰ��Ŀ¼��ָ��  
    sonDir=(struct dirFile *)(osPoint->data [ j - 3]);  
  
    for(i=1;i<BlockFcbCount;i++)  //������Ŀ¼�Ƿ�Ϊ��Ŀ¼  
    {  
        if(sonDir->fcb[i].type!=NULL)  
        {  
            printf("���ļ���Ϊ�ǿ��ļ���,Ϊȷ����ȫ������պ���ɾ��!/n");  
            return 0;  
        }  
    }  
    /*��ʼɾ����Ŀ¼����*/  
    osPoint->FAT1[j] = osPoint->FAT2[j]=0;     //fat���  
    char *p=osPoint->data[j-3];      //��ʽ����Ŀ¼  
    memset(p,0,BlockSize);  
    dir->fcb[temp].initialize();          //������Ŀ¼ռ��Ŀ¼��  
    printf("---------------------------------------------------------------/n/n");  
    return 1;  
}  
  
/*-----------�ڵ�ǰĿ¼�´����ı��ļ�---------------*/  
int create(char *name)  
{  
    int i,iFAT;//temp,  
    int emptyNum = 0,isFound = 0;        //����Ŀ¼�����  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
  
    //�鿴Ŀ¼�Ƿ�����  
    //Ϊ�˱���ͬ�����ı��ļ�  
    for(i=1;i<BlockFcbCount;i++)  
    {  
        if(dir->fcb[i].type == NULL && isFound == 0)  
        {  
            emptyNum = i;  
            isFound = 1;  
        }  
        else if(dir->fcb[i].type==GENERAL && strcmp(dir->fcb[i].fname,name)==0 )  
        {  
            printf("�޷���ͬһĿ¼�´���ͬ���ļ�!/n");  
            return 0;  
        }  
    }  
  
    if(emptyNum == 0)  
    {  
        printf("�Ѿ��ﵽĿ¼���������ޣ��޷�������Ŀ¼!/n");  
        return 0;  
    }  
  
    //����FAT��Ѱ�ҿհ���������������̿��j  
    for(i = 3;i<BlockCount;i++)  
    {  
        if(osPoint->FAT1[i]==0)  
            break;  
    }  
    if(i==BlockCount)  
    {  
        printf("��������!/n");  
        return 0;  
    }  
    iFAT=i;  
  
    /*------�������׶�---------*/  
    //������̿�  
    osPoint->FAT1[iFAT] = osPoint->FAT2[iFAT] = 1;  
    /*-----------���������з���----------*/  
  
    //��д�÷����µ��̿�Ĳ���  
    strcpy(dir->fcb[emptyNum].fname,name);  
    dir->fcb[emptyNum].type=GENERAL;  
    dir->fcb[emptyNum].fatherBlockNum=current;  
    dir->fcb[emptyNum].currentBlockNum=iFAT;  
    dir->fcb[emptyNum].size =0;  
    char* p = osPoint->data[iFAT -3];  
    memset(p,4,BlockSize);  
    printf("----------------------------------------------------------------/n/n");  
    return 1;  
}  
  
/*-------��ѯ��Ŀ¼------------*/  
int listshow()  
{  
    int i,DirCount=0,FileCount=0;  
    //������ǰĿ¼  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
  
    for(i=1;i<BlockFcbCount;i++)  
    {  
        if(dir->fcb[i].type==GENERAL)  
        {   //������ͨ�ļ�  
            FileCount++;  
            printf("%s     �ı��ļ�./n",dir->fcb[i].fname);  
        }  
        if(dir->fcb[i].type==DIRECTORY)  
        {   //����Ŀ¼�ļ�  
            DirCount++;  
            printf("%s     �ļ���./n",dir->fcb[i].fname);  
        }  
    }  
    printf("/n��Ŀ¼�¹��� %d ���ı��ļ�, %d ���ļ���/n/n",FileCount,DirCount);  
    printf("--------------------------------------------------------/n/n");  
    return 1;  
}  
  
  
  
/*---------�ڵ�ǰĿ¼��ɾ���ļ�-----------*/  
int delfile(char *name)  
{  
    int i,temp,j;  
    //ȷ����ǰĿ¼���и��ļ�,���Ҽ�¼������FCB�±�  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
  
    for(i=1;i<BlockFcbCount;i++) //���Ҹ��ļ�  
    {  
        if(dir->fcb[i].type==GENERAL && strcmp(dir->fcb[i].fname,name)==0)  
        {  
            break;  
        }  
    }  
  
    if(i==BlockFcbCount)  
    {  
        printf("��ǰĿ¼�²����ڸ��ļ�!/n");  
        return 0;  
    }  
  
    int k;  
    for(k=0;k<OPEN_MAX;k++)  
    {  
        if((openlist->f [k].type = GENERAL)&&  
            (strcmp(openlist->f [k].fname,name)==0))  
        {  
            if(openlist->f[k].fatherBlockNum == current)  
            {  
                break;  
            }  
            else  
            {  
                printf("���ļ�δ�ڵ�ǰĿ¼��!/n");  
                return 0;  
            }  
        }  
    }  
  
    if(k!=OPEN_MAX)  
    {  
        close(name);  
    }  
  
    //�Ӵ��б���ɾ��  
      
    temp=i;  
    /*��ʼɾ���ļ�����*/  
    j = dir->fcb [temp].currentBlockNum ;    //�����̿��j  
    osPoint->FAT1[j]=osPoint->FAT2[j]=0;     //fat1,fat2����Ϊ�հ�  
    char *p=osPoint->data[j - 3];  
    memset(p,0,BlockSize); //���ԭ�ı��ļ�������  
    dir->fcb[temp].initialize();    //type=0;     //��Ǹ�Ŀ¼��Ϊ���ļ�  
    printf("------------------------------------------------------------/n/n");  
    return 1;  
}  
  
  
/*--------------���뵱ǰĿ¼�µ���Ŀ¼--------------*/  
int changePath(char *sonfname)  
{  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
    /*�ص���Ŀ¼*/  
    if(strcmp(sonfname,"..")==0)  
    {  
        if(current==2)  
        {  
            printf("�����Ѿ��ڸ�Ŀ¼��!/n");  
            return 0;  
        }  
        current = dir->fcb[0].fatherBlockNum ;  
        currentPath = currentPath.substr(0,currentPath.size() - strlen(dir->fcb[0].fname )-1);  
        return 1;  
    }  
    /*������Ŀ¼*/  
    int i,temp;  
    //ȷ����ǰĿ¼���и�Ŀ¼,���Ҽ�¼������FCB�±�  
    for(i = 1; i < BlockFcbCount; i++)  
    {     //���Ҹ��ļ�  
        if(dir->fcb[i].type==DIRECTORY && strcmp(dir->fcb[i].fname,sonfname)==0 )  
        {  
            temp=i;  
            break;  
        }  
    }  
  
    if(i==BlockFcbCount)  
    {  
        printf("�����ڸ�Ŀ¼!/n");  
        return 0;  
    }  
  
    //�޸ĵ�ǰ�ļ���Ϣ  
    current=dir->fcb [temp].currentBlockNum ;  
    currentPath = currentPath+dir->fcb [temp].fname +"//";  
    printf("-------------------------------------------------------------/n/n");  
    return 1;  
}  
  
/*--------System exit---------------------*/  
int exit()  
{  
    //�������ļ����ر�  
  
    //���浽������C:/myfiles  
    fp=fopen(FilePath,"w+");  
    fwrite(BaseAddr,sizeof(char),DiskSize,fp);  
    fclose(fp);  
    //�ͷ��ڴ��ϵ��������  
    free(osPoint);  
    //�ͷ��û����ļ���  
    delete openlist;  
    printf("---------------------------------------------------------/n/n");  
    return 1;  
}  
  
/*-------------��ָ�����ļ����¼��Ϣ---------------*/  
int write(char *name)  
{  
    int i;  
    char *startPoint,*endPoint;  
    //�ڴ��ļ��б��в��� file(����Ҫ����ͬ����ͬĿ¼�ļ������!!!)  
    for(i=0;i<OPEN_MAX;i++)  
    {  
        if(strcmp(openlist->f [i].fname,name)==0 )  
        {  
            if(openlist->f[i].fatherBlockNum ==current)  
            {  
                break;  
            }  
            else  
            {  
                printf("���ļ����ڴ��б��У���ϵͳֻ�ܸ�д��ǰĿ¼���ļ�!/n");  
                return 0;  
            }  
        }  
    }  
  
    if(i==OPEN_MAX)  
    {  
        printf("���ļ���δ��,���ȴ򿪺�д����Ϣ!!/n");  
        return 0;  
    }  
  
    int active=i;  
    int fileStartNum = openlist->f[active].currentBlockNum - 3 ;  
    startPoint = osPoint->data[fileStartNum];  
    endPoint = osPoint->data[fileStartNum + 1];  
  
    printf("�������ı���Ctrl D�Ž���:/t");  
  
    char input;  
    while(((input=getchar())!=4))  
    {  
        if(startPoint < endPoint-1)  
        {  
            *startPoint++ = input;  
        }  
        else  
        {  
            printf("�ﵽ�����ļ����������");  
            *startPoint++ = 4;  
            break;  
        }  
    }  
    return 1;  
}  
  
/*---------ѡ��һ���򿪵��ļ���ȡ��Ϣ----------*/  
int  read(char *file)  
{  
    int i,fileStartNum;  
    char *startPoint,*endPoint;  
    //struct dirFile *dir;  
    //�ڴ��ļ��б��в��� file(����Ҫ����ͬ����ͬĿ¼�ļ������!!!)  
    for(i=0;i<OPEN_MAX;i++)  
    {  
        if(strcmp(openlist->f [i].fname,file)==0 )  
        {  
            if(openlist->f[i].fatherBlockNum ==current)  
            {  
                break;  
            }  
            else  
            {  
                printf("���ļ����ڴ��б��У���ϵͳֻ���Ķ���ǰĿ¼���ļ�!/n");  
                return 0;  
            }  
        }  
    }  
  
    if(i==OPEN_MAX)  
    {  
        printf("���ļ���δ��,���ȴ򿪺��ȡ��Ϣ!/n");  
        return 0;  
    }  
    int active=i;  
  
    //�����ļ������ַ  
    fileStartNum = openlist->f[active].currentBlockNum - 3 ;  
    startPoint = osPoint->data[fileStartNum];  
    endPoint = osPoint->data[fileStartNum + 1];  
    //end_dir=(struct dirFile *)[BlockSize-1];  
  
    //q=(char *)end_dir;  
  
    printf("���ļ�������Ϊ:  ");  
    while((*startPoint)!=4&& (startPoint < endPoint))  
    {  
        putchar(*startPoint++);  
    }  
  
  
    printf("/n");  
    return 1;  
  
  
}  
/*��ǰĿ¼�����һ�����ļ�*/  
int open(char *file)//���ļ�  
{  
    int i,FcbIndex;  
    //ȷ��û�д򿪹����ļ� = ��ͬ���� + ��ͬĿ¼  
    for(i=0;i<OPEN_MAX;i++)  
    {  
        if(openlist->f[i].type ==GENERAL && strcmp(openlist->f [i].fname,file)==0 &&openlist->f[i].fatherBlockNum == current)  
        {  
            printf("���ļ��Ѿ�����!/n");  
            return 0;  
        }  
    }  
  
    //ȷ���пյĴ��ļ���  
    if(openlist->files == OPEN_MAX)  
    {  
        printf("���ļ���Ŀ�ﵽ����!�޷��ٴ����ļ�./n");  
        return 0;  
    }  
  
    //ȷ����ǰĿ¼���и��ļ�,���Ҽ�¼������FCB�±�  
    struct dirFile *dir;     //��ǰĿ¼��ָ��  
    if(current==2)  
        dir=&(osPoint->root);  
    else  
        dir=(struct dirFile *)(osPoint->data [current-3]);  
  
    for(i = 1;i< BlockFcbCount;i++)  
    {     //���Ҹ��ļ�  
        if(dir->fcb[i].type==GENERAL && strcmp(dir->fcb[i].fname,file)==0 )  
        {  
            FcbIndex=i;  
            break;  
        }  
    }  
  
    if(i==BlockFcbCount)  
    {  
        printf("��ǰĿ¼�²����ڸ��ļ�!/n");  
        return 0;  
    }  
  
    //װ�����ļ�������ļ��б�,(FCB��Ϣ���ļ���++) �����ѵ����ֹ�������  
    openlist->f[OpenFileCount] = dir->fcb[FcbIndex]; //FCB����  
    openlist->files ++;  
    printf("�ļ��򿪳ɹ�!/n");  
    OpenFileCount++;  
    return 1;  
}  
  
int close(char *file)  
{  
    //�ͷŸ��ļ���ռ�ڴ�  
    //�ͷ��û����ļ��б����  
    int i;  
    //�ڴ��ļ��б��в��� file(����Ҫ����ͬ����ͬĿ¼�ļ������!!!)  
    for(i=0;i<OPEN_MAX;i++)  
    {  
        if((openlist->f [i].type = GENERAL)&&  
            (strcmp(openlist->f [i].fname,file)==0))  
        {  
            if(openlist->f[i].fatherBlockNum == current)  
            {  
                break;  
            }  
            else  
            {  
                printf("���ļ��Ѵ򿪣���δ�ڵ�ǰĿ¼�£��޷��ر�!/n");  
                return 0;  
            }  
        }  
    }  
  
    if(i==OPEN_MAX)  
    {  
        printf("���ļ�δ�ڴ��б���!/n");  
        return 0;  
    }  
  
    int active=i;  
    openlist->files --;  
    openlist->f[active].initialize();  
    OpenFileCount--;  
    printf("���ļ��ѹر�!/n");  
    return 1;  
}  
  
void main()  
{  
  
    /*********************************************************************/  
    printf("-----Welcome To My Operate System Of File(FAT)-----/n");  
    //ʹ��˵����  
    printf("/n  ������ʹ��˵���飺/n");  
    printf("--------------------------------------------------------------/n");  
    printf("|| format :�Դ��̸�ʽ��.                           || /n");  
    printf("|| exit   :��ȫ�˳����ļ�ϵͳ,������Ϣ.            || /n");  
    printf("|| mkdir dirname :������Ŀ¼.                      || /n");  
    printf("|| rmdir dirname :ɾ����Ŀ¼.                      || /n");  
    printf("|| ls    dirname :��ʾ��ǰĿ¼����Ϣ.              || /n");  
    printf("|| cd     dirname :���ĵ�ǰĿ¼.                   || /n");  
    printf("|| create filename :����һ�����ļ�,���Ҵ�.       || /n");  
    printf("|| write filename :ѡ��һ���򿪵��ļ�д����Ϣ      || /n");  
    printf("|| read   filename :ѡ��һ���򿪵��ļ���ȡ��Ϣ.    || /n");  
    printf("|| rm     filename :ɾ���ļ�.                      || /n");  
    printf("|| open   filename :���ļ�.                      || /n");  
    printf("|| close filename :�ر��ļ�.                       || /n");  
    printf("-------------------------------------------------------------/n/n");  
    //�����û��ļ��򿪱�  
    openlist=new OPENLIST;  
    //��������ռ䲢�ҳ�ʼ��  
    BaseAddr=(char *)malloc(DiskSize);  
    //������̳�ʼ��  
    osPoint=(struct DISK *)(BaseAddr);  
    //���ش����ļ�  
    if((fp=fopen(FilePath,"r"))!=NULL){  
        fread(BaseAddr,sizeof(char),DiskSize,fp);  
        printf("���ش����ļ�( %s )�ɹ�,���ڿ��Խ��в�����!/n/n",FilePath);  
    }  
    else{  
        printf("�������һ��ʹ�ø��ļ�����ϵͳ!/t���ڳ�ʼ��.../n");  
        format();  
        printf("��ʼ���Ѿ����,���ڿ��Խ��в�����!/n/n");  
    }  
  
    printf("--------------------------------------------------------------/n/n");  
    while(1){  
        cout<<currentPath;  
        cin>>cmd;  
        if(cmd=="format"){  
            format();  
        }  
        else if(cmd=="mkdir"){  
            cin>>command;  
            mkdir(command);  
        }  
        else if(cmd=="rmdir"){  
            cin>>command;  
            rmdir(command);  
        }  
        else if(cmd=="ls"){  
            listshow();  
        }  
        else if(cmd=="cd"){  
            cin>>command;  
            changePath(command);  
        }  
        else if(cmd=="create"){  
            cin>>command;  
            create(command);  
        }  
  
        else if(cmd=="write"){  
            cin>>command;  
            write(command);  
        }  
        else if(cmd=="read"){  
            cin>>command;  
            read(command);  
        }  
        else if(cmd=="rm"){  
            cin>>command;  
            delfile(command);  
        }  
        else if(cmd=="open"){  
            cin>>command;  
            open(command);  
        }  
        else if(cmd=="close"){  
            cin>>command;  
            close(command);  
        }  
        else if(cmd=="exit"){  
            exit();  
            break;  
        }  
        else cout<<"��Чָ��,����������:"<<endl;  
    }  
    printf("Thank you for using my file system!/n");  
}