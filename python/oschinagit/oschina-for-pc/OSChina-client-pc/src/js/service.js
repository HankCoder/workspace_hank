var _tweet_ = {
	start:function(){
		_tweet_.getNewTweetList();
		setInterval(_tweet_.getNewTweetList,15000)
	},
	getNewTweetList:function(){
		api.getTweetList(function(newTweets,hotTweets){
			$("#new-tweet-list>ul").html(newTweets)
			$("#hot-tweet-list>ul").html(hotTweets)
		});
	}
};

var _news_ = {
	latest:"latest",
	recommend:"recommend",
	getNewsList:function(pageIndex,callback){
		api.getNewsList("",pageIndex,20,function(data){
			var ns = data.news;
			var html = [];
			for(var i=0;i<ns.length;i++){
				html.push("<li>");
				html.push("<p>");
				//
				var url="javascript:void(0)";
				if(ns[i].url){
					url = ns[i].url;
				}else{
					url = "http://www.oschina.net/news/"+ns[i].id;
				}
				//由于api中没给出文章地址，所以以上url根据自己分析得出。
				//目前 ，如果资讯是翻译的文章，还无法获取到url，所以点击会跳到osc 404页面
				html.push("<a href='"+url+"'>");
				html.push(ns[i].title);
				html.push("</a>");
				html.push("</p>");
				html.push("<p class='outline'>");
				html.push(ns[i].author);
				html.push(" 发布于 ");
				html.push(friendly_time(ns[i].pubDate.replace(/\-/g,"/")));
				html.push(" (");
				html.push(ns[i].commentCount);
				html.push("评) ");
				html.push("</p>");
				html.push("</li>");
			}
			callback(html.join(""));
		});
	},
	getBlogList:function(type,pageIndex,callback){
		api.getBlogList(type,pageIndex,20,function(data){
			var ns = data.blog;
			var html = [];
			for(var i=0;i<ns.length;i++){
				html.push("<li>");
				html.push("<p>");
				html.push("<a href='"+ns[i].url+"'>");
				html.push(ns[i].title);
				html.push("</a>");
				html.push("</p>");
				html.push("<p class='outline'>");
				html.push(ns[i].authorname);
				html.push(" 发布于 ");
				html.push(friendly_time(ns[i].pubDate.replace(/\-/g,"/")));
				html.push(" (");
				html.push(ns[i].commentCount);
				html.push("评) ");
				html.push("</p>");
				html.push("</li>");
			}
			callback(html.join(""));
		});
	}	
};

var _notice_ = {
	start:function(uid){
		_notice_.getNoticeList(uid);
		setInterval(function(){
			_notice_.getNoticeList(uid);
		},30000)
	},
	getNoticeList:function(uid){
		api.getNoticeList(uid,function(data){
			usp = window.localStorage.userSpace;
			notice = data.oschina.notice;
			msg = [];
			if(notice.atmeCount>0){
				msg.push(notice.atmeCount+"条提到我，<a href='"+usp+"/?ft=atme'>@提到我»</a>")
			}
			if(notice.reviewCount>0){
				msg.push(notice.reviewCount+"条新评论，<a href='"+usp+"/?ft=rpl'>查看评论»</a>")
			}
			if(notice.msgCount>0){
				msg.push(notice.msgCount+"条新留言，<a href='"+usp+"/admin/inbox'>查看留言»</a>")
			}
			if(notice.newFansCount>0){
				msg.push(notice.newFansCount+"个新粉丝，<a href='"+usp+"/fans?sort=time'>查看粉丝»</a>")
			}
			if(msg.length>0){
				parent._notifications_.showNotification("OSC消息提示","osc_notice",msg.join("</br>"),0);
			}else{
				parent._notifications_.cleanNotification("osc_notice");
			}
		});
	}	
}
