'''
Created on 2013-6-2

@author: fants
'''
class URLs:
    HOST = "www.oschina.net" #192.168.1.213  www.oschina.net
    HTTP = "http://"
    HTTPS = "https://"
    
    URL_SPLITTER = "/"
    URL_UNDERLINE = "_"
    
    URL_API_HOST = HTTP + HOST + URL_SPLITTER
    LOGIN_VALIDATE_HTTP = HTTP + HOST + URL_SPLITTER + "action/api/login_validate"
    LOGIN_VALIDATE_HTTPS = HTTPS + HOST + URL_SPLITTER + "action/api/login_validate"
    NEWS_LIST = URL_API_HOST+"action/api/news_list"
    NEWS_DETAIL = URL_API_HOST+"action/api/news_detail"
    POST_LIST = URL_API_HOST+"action/api/post_list"
    POST_DETAIL = URL_API_HOST+"action/api/post_detail"
    POST_PUB = URL_API_HOST+"action/api/post_pub"
    TWEET_LIST = URL_API_HOST+"action/api/tweet_list"
    TWEET_DETAIL = URL_API_HOST+"action/api/tweet_detail"
    TWEET_PUB = URL_API_HOST+"action/api/tweet_pub"
    TWEET_DELETE = URL_API_HOST+"action/api/tweet_delete"
    ACTIVE_LIST = URL_API_HOST+"action/api/active_list"
    MESSAGE_LIST = URL_API_HOST+"action/api/message_list"
    MESSAGE_DELETE = URL_API_HOST+"action/api/message_delete"
    MESSAGE_PUB = URL_API_HOST+"action/api/message_pub"
    COMMENT_LIST = URL_API_HOST+"action/api/comment_list"
    COMMENT_PUB = URL_API_HOST+"action/api/comment_pub"
    COMMENT_REPLY = URL_API_HOST+"action/api/comment_reply"
    COMMENT_DELETE = URL_API_HOST+"action/api/comment_delete"
    SOFTWARECATALOG_LIST = URL_API_HOST+"action/api/softwarecatalog_list"
    SOFTWARETAG_LIST = URL_API_HOST+"action/api/softwaretag_list"
    SOFTWARE_LIST = URL_API_HOST+"action/api/software_list"
    SOFTWARE_DETAIL = URL_API_HOST+"action/api/software_detail"    
    USERBLOG_LIST = URL_API_HOST+"action/api/userblog_list"
    USERBLOG_DELETE = URL_API_HOST+"action/api/userblog_delete"
    BLOG_LIST = URL_API_HOST+"action/api/blog_list"
    BLOG_DETAIL = URL_API_HOST+"action/api/blog_detail"
    BLOGCOMMENT_LIST = URL_API_HOST+"action/api/blogcomment_list"
    BLOGCOMMENT_PUB = URL_API_HOST+"action/api/blogcomment_pub"
    BLOGCOMMENT_DELETE = URL_API_HOST+"action/api/blogcomment_delete"
    MY_INFORMATION = URL_API_HOST+"action/api/my_information"
    USER_INFORMATION = URL_API_HOST+"action/api/user_information"
    USER_UPDATERELATION = URL_API_HOST+"action/api/user_updaterelation"
    USER_NOTICE = URL_API_HOST+"action/api/user_notice"
    NOTICE_CLEAR = URL_API_HOST+"action/api/notice_clear"
    FRIENDS_LIST = URL_API_HOST+"action/api/friends_list"
    FAVORITE_LIST = URL_API_HOST+"action/api/favorite_list"
    FAVORITE_ADD = URL_API_HOST+"action/api/favorite_add"
    FAVORITE_DELETE = URL_API_HOST+"action/api/favorite_delete"
    SEARCH_LIST = URL_API_HOST+"action/api/search_list"
    PORTRAIT_UPDATE = URL_API_HOST+"action/api/portrait_update"
    UPDATE_VERSION = URL_API_HOST+"MobileAppVersion.xml"
    
    URL_HOST = "oschina.net"
    URL_WWW_HOST = "www."+URL_HOST
    URL_MY_HOST = "my."+URL_HOST
    
    URL_TYPE_NEWS = URL_WWW_HOST + URL_SPLITTER + "news" + URL_SPLITTER
    URL_TYPE_SOFTWARE = URL_WWW_HOST + URL_SPLITTER + "p" + URL_SPLITTER
    URL_TYPE_QUESTION = URL_WWW_HOST + URL_SPLITTER + "question" + URL_SPLITTER
    URL_TYPE_BLOG = URL_SPLITTER + "blog" + URL_SPLITTER
    URL_TYPE_TWEET = URL_SPLITTER + "tweet" + URL_SPLITTER
    URL_TYPE_ZONE = URL_MY_HOST + URL_SPLITTER + "u" + URL_SPLITTER
    URL_TYPE_QUESTION_TAG = URL_TYPE_QUESTION + "tag" + URL_SPLITTER