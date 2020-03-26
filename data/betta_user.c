betta_user()
{

	web_url("login", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_6.jpg", ENDITEM, 
		LAST);

	web_url("favicon.ico", 
		"URL=http://85.143.219.176/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	/* entrance */

	web_add_header("Content-Type", 
		"application/json");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(22);

	web_custom_request("login_2", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"Body={\"login\":\"admin\",\"password\":\"8c6976e5b5410415bde908bd4dee15dfb167a9c873fc4bb8a81f6f2ab448a918\"}", 
		LAST);

	web_url("85.143.219.176", 
		"URL=http://85.143.219.176/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_4.jpg", ENDITEM, 
		LAST);

	/* first link */

	lr_think_time(14);

	web_link("lesson_4", 
		"Text=lesson_4", 
		"Snapshot=t65.inf", 
		LAST);

	/* second link */

	web_link("lesson 2", 
		"Text=lesson 2", 
		"Ordinal=1", 
		"Snapshot=t66.inf", 
		LAST);

	/* theerd link */

	lr_think_time(26);

	web_link("lesson 1", 
		"Text=lesson 1", 
		"Ordinal=2", 
		"Snapshot=t67.inf", 
		LAST);

	/* exit */

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(13);

	web_custom_request("login_3", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/10", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login_4", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/10", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}