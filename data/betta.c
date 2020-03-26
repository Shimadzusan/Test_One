betta()
{

	web_url("login", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_6.jpg", ENDITEM, 
		LAST);

	web_url("favicon.ico", 
		"URL=http://85.143.219.176/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	/* enter */

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(22);

	web_custom_request("login_2", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body={\"login\":\"admin\",\"password\":\"8c6976e5b5410415bde908bd4dee15dfb167a9c873fc4bb8a81f6f2ab448a918\"}", 
		LAST);

	web_url("85.143.219.176", 
		"URL=http://85.143.219.176/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_4.jpg", ENDITEM, 
		LAST);

	lr_think_time(31);

	web_link("lesson 2", 
		"Text=lesson 2", 
		"Ordinal=1", 
		"Snapshot=t25.inf", 
		LAST);

	/* exit */

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(14);

	web_custom_request("login_3", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/3", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login_4", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/3", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}