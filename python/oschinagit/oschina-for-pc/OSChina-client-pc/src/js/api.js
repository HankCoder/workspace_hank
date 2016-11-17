var api = {
	login:function(username,pwd,callback){
		$.ajax({
			type:"POST",
			dataType:"text",
			url:LOGIN_VALIDATE_HTTP,
			data:{
				username:username,
				pwd:pwd
			},
			success:function(data){
				if(data){
					var json = parent._service_.xml2json(data)
					json = JSON.parse(json);
					callback(json);
				}
			},
			error:function(){
				callback(null);
			}
		});
	},
	/*动弹列表
		 uid -1 热门，0 最新，大于0 某用户的动弹(uid)
	*/
	getTweetList:function(callback){
		$.get(TWEET_PAGE,null,
			function(data){
				if(data){
					data = parent._service_.handleTweetHtml(data)
					data = $(data);
					var allTweets = data.find("#TopTweets>.logs>#tiles>li");
					var newTweets = allTweets.filter(":lt(10)");
					var hotTweets = data.find("#HotTweets>ul>li");
					callback(newTweets,hotTweets);
				}
			},
			"text"
		);
	},
	/**
	 * 获得通知消息列表
 	* @param {Object} callback
	 */
	getNoticeList:function(uid,callback){
		//alert(uid)
		$.get(USER_NOTICE,{
				uid:uid
			},
			function(data){
				if(data){
					var json = parent._service_.xml2json(data);
					json = JSON.parse(json);
					callback(json);
				}
			},
			"text"
		);
	},
	/**
	 *获取资讯列表 
	 */
	getNewsList:function(catalog,pageIndex,pageSize,callback){
		$.get(NEWS_LIST,{
				catalog:catalog,
				pageIndex:pageIndex,
				pageSize:pageSize
			},
			function(data){
				if(data){
					var json = parent._service_.xml2json(data);
					json = JSON.parse(json);
					callback(json.oschina.newslist);
				}
			},
			"text"
		)
	},
	/**
	 *获取博客列表 
	 */
	getBlogList:function(type,pageIndex,pageSize,callback){
		$.get(BLOG_LIST,{
				type:type,
				pageIndex:pageIndex,
				pageSize:pageSize
			},
			function(data){
				if(data){
					var json = parent._service_.xml2json(data);
					json = JSON.parse(json);
					callback(json.oschina.blogs);
				}
			},
			"text"
		)
	}	
}
