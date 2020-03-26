echo()
{

	web_url("login", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_6.jpg", ENDITEM, 
		LAST);

	web_url("favicon.ico", 
		"URL=http://85.143.219.176/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	/* enter */

	web_add_header("Content-Type", 
		"application/json");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(23);

	web_custom_request("login_2", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"Body={\"login\":\"admin\",\"password\":\"8c6976e5b5410415bde908bd4dee15dfb167a9c873fc4bb8a81f6f2ab448a918\"}", 
		LAST);

	web_url("85.143.219.176", 
		"URL=http://85.143.219.176/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_4.jpg", ENDITEM, 
		LAST);

	/* go link java */

	web_link("lesson 1", 
		"Text=lesson 1", 
		"Ordinal=1", 
		"Snapshot=t54.inf", 
		LAST);

	/* go link tests */

	lr_think_time(7);

	web_link("lesson_4", 
		"Text=lesson_4", 
		"Snapshot=t55.inf", 
		LAST);

	/* set question */

	web_add_auto_header("Content-Type", 
		"application/json");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(32);

	web_custom_request("questions", 
		"URL=http://85.143.219.176/api/v1/questions", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3835", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"Body={\"lesson_id\":3835,\"question\":\"my question\\nмой вопрос\"}", 
		LAST);

	/* task field */

	lr_think_time(50);

	web_custom_request("solutions", 
		"URL=http://85.143.219.176/api/v1/solutions", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3835", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"Body={\"lesson_id\":3835,\"solution\":\"task field testing\\nполе задание\"}", 
		LAST);

	/* exit */

	web_revert_auto_header("Content-Type");

	lr_think_time(13);

	web_custom_request("login_3", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3835", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("login_4", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/3835", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login_5", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/3835", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}