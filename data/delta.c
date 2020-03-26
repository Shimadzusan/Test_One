delta()
{

	web_url("login", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_6.jpg", ENDITEM, 
		LAST);

	web_url("favicon.ico", 
		"URL=http://85.143.219.176/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Content-Type", 
		"application/json");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(9);

	web_custom_request("login_2", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"Body={\"login\":\"admin\",\"password\":\"8c6976e5b5410415bde908bd4dee15dfb167a9c873fc4bb8a81f6f2ab448a918\"}", 
		LAST);

	web_url("85.143.219.176", 
		"URL=http://85.143.219.176/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/login", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/images/login_4.jpg", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_link("lesson_4", 
		"Text=lesson_4", 
		"Snapshot=t42.inf", 
		LAST);

	web_link("lesson 3", 
		"Text=lesson 3", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("login_3", 
		"URL=http://85.143.219.176/api/v1/login", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://85.143.219.176/lessons/7", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("session=eyJyb2xlIjoib3duZXIiLCJ1c2VyX2lkIjoxfQ.Xns5xg.sednznxVnS9vLObKUT820UtusqE; DOMAIN=85.143.219.176");

	web_url("login_4", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/7", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login_5", 
		"URL=http://85.143.219.176/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://85.143.219.176/lessons/7", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}