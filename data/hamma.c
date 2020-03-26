hamma()
{

	web_url("login", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_6.jpg", ENDITEM, 
		LAST);

	web_url("favicon.ico", 
		"URL=http://85.143.219.176/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	/* enter */

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(21);

	web_custom_request("login_2", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"Body={\"login\":\"admin\",\"password\":\"8c6976e5b5410415bde908bd4dee15dfb167a9c873fc4bb8a81f6f2ab448a918\"}", 
		LAST);

	web_url("85.143.219.176", 
		"URL=http://85.143.219.176/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_4.jpg", ENDITEM, 
		LAST);

	/* go link java */

	web_link("lesson 2", 
		"Text=lesson 2", 
		"Ordinal=1", 
		"Snapshot=t32.inf", 
		LAST);

	/* go link test */

	lr_think_time(23);

	web_link("lesson_5", 
		"Text=lesson_5", 
		"Snapshot=t33.inf", 
		LAST);

	/* question */

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(53);

	web_custom_request("questions", 
		"URL=http://85.143.219.176/api/v1/questions", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3834", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"Body={\"lesson_id\":3834,\"question\":\"здравствуй мир,\\nhello world\"}", 
		LAST);

	/* my answer */

	lr_think_time(41);

	web_custom_request("solutions", 
		"URL=http://85.143.219.176/api/v1/solutions", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3834", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"Body={\"lesson_id\":3834,\"solution\":\"my answer?\\nмой ответ\"}", 
		LAST);

	/* exit */

	lr_think_time(19);

	web_custom_request("login_3", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3834", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("login_4", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/3834", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	/* fail enter */

	return 0;
}