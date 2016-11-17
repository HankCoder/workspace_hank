$(function(){
	parent.reBg();
	_tweet_.start();
	initEvent();
	showUserInfo();
	//加载一页来初始化资讯
	newsRefresh("new-news-list");
});

function showUserInfo(){
	var user = parent.loginResult["oschina"]["user"];
	$("#user-portrait").css("background-image","url('"+user["portrait"]+"')");
	$(".user-name").text(user["name"]);
	//
	timer = setInterval(function(){
		if(parent._service_.isUserDataLoaded()===1){
			clearInterval(timer);
			$(".user-signature").text(parent._service_.getUserResume());
			window.localStorage.userSpace = parent._service_.getUserSpace();
			_notice_.start(parent.loginResult.oschina.user.uid);
		}
	},500);
	
}

function initEvent(){
	//评论数点击事件
	$(".tweet-list").on("click",".tweet .outline a",function(){
		parent._window_.open($(this).attr("href"),530,520,1,"handleTweetDetailHtml");
		//parent._window_.open("http://www.baidu.com",500,500,"../js/tweetDetail.js");
		return false;
	});
	//滚动加载事件
	$(".scroll-load").scroll(function(){
		var obj=$(this);
		var pobj = obj.parent();
		if(obj.scrollTop() + obj.height()>this.scrollHeight-100){
			if(pobj.attr("loading")) return;
			pobj.attr("loading",1);
			var id = pobj.attr("id");
			//最新资讯
			var pageIndex = parseInt(pobj.attr("pageIndex"));
			pageIndex++;
			pobj.attr("pageIndex",pageIndex);
			
			callback = function(data){
				obj.append(data);
				pobj.removeAttr("loading");
			}
			
			if(id==="new-news-list"){
				_news_.getNewsList(pageIndex,callback);
			}else if(id==="new-blog-list"){
				_news_.getBlogList(_news_.latest,pageIndex,callback);
			}else if(id==="rc-read-list"){
				_news_.getBlogList(_news_.recommend,pageIndex,callback);
			}
		}
	});
}

function tabTitleClick(li,index){
	$(".tab-content:visible").hide();
	$(".tab-content:eq("+index+")").show();
	$(".tabs-title>li").removeClass("tab-select");
	$(li).addClass("tab-select");
}
//动弹标签
function tweetClassClick(li,id){
	$(".tweet-list:visible,#tweet-ref").hide();
	$("#"+id).show();
	$(".tweet-class label").removeClass("tc-select");
	$(li).addClass("tc-select");
	if(id==="all-tweet-list"){
		$("#tweet-ref").show();
		loadAllTweet();
	}
}

function loadAllTweet(){
	var frame = $("#all-tweet-frame");
	if(!frame.attr("isLoaded")){
		$.get("http://www.oschina.net/tweets",null,function(data){
			data = parent.parent._service_.handleAllTweetHtml(data);
			frame[0].contentDocument.body.innerHTML = "";
			frame[0].contentDocument.write(data);			
		},"html");
		frame.attr("isLoaded",1);
	}
}
//刷新全部动弹标签页
function allTweetRefresh(){
	$("#all-tweet-frame").removeAttr("isLoaded");
	loadAllTweet();
}

//资讯标签
function newsClassClick(li,id){
	$(".news-list:visible").hide();
	var el = $("#"+id);
	el.show();
	$(".news-class label").removeClass("tc-select");
	$(li).addClass("tc-select");
	if(!el.attr("isLoaded")){
		newsRefresh();
	}
}
//刷新资讯
function newsRefresh(id){
	var list = id?$("#"+id):$(".news-list:visible");
	var id = list.attr("id");
	
	var callback = function(data){
		var ul = list.find(">ul");
		ul[0].scrollTop=0;
		ul.html(data);
	};
	if(id==="new-news-list"){
		_news_.getNewsList(0,callback);
	}else if(id==="new-blog-list"){
		_news_.getBlogList(_news_.latest,0,callback);
	}else if(id==="rc-read-list"){
		_news_.getBlogList(_news_.recommend,0,callback);		
	}
	list.attr("isLoaded",1).attr("pageIndex",0);
}




//以友好的方式显示时间
function friendly_time(time1) {
	var da = new Date();
	time1 = Date.parse(time1);
	sda = new Date(time1);
	var time2 = da.getTime();
	var time = 0;
	if (time1 > time2) {
		time = time1 - time2;
		sda = da;
	} else {
		time = time2 - time1;
	}
	if (time < 1000) return "刚刚";
	time = parseInt(time / 1000);
	if (time > 86400) {
		var day = parseInt(time / (24 * 60 * 60));
		if (day == 1) {
			return "昨天(" + sda.getHours() + ":" + sda.getMinutes() + ")";
		} else if (day < 30) {
			return day + "天前";
		} else if (day < 360) {
			var moth = parseInt(day / 30);
			return moth + "个月前";
		} else {
			var year = parseInt(day / 360);
			return year + "年前";
		};
	} else if (time > 3600) {
		var hour = parseInt(time / (60 * 60));
		return hour + "小时前";
	} else if (time > 60) {
		var hour = parseInt(time / 60);
		return hour + "分钟前";
	} else {
		return time + "秒前";
	}
}

//-------------------
function about(){
	alert("作者:铂金小鸟\n主页:http://my.oschina.net/fants")
}
