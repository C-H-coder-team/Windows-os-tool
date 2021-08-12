#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"stdc++.h" 
using namespace std;

void No_Cursor()
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1;
	cci.bVisible = false;
	SetConsoleCursorInfo(hOut, &cci);
}

void gotoxy(short x, short y)
{
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
	No_Cursor();
}

int Display_Localtime(short secs)
{
	time_t t;
	struct tm *data_time = new tm;
	cout << "当前时间是: " << endl;
	for (short i = 0; i < secs; i++)
	{
		gotoxy(10, 0);
		time(&t); 
		data_time = localtime(&t);    //Dev中使用原版  
		//localtime_s (data_time, &t);     // VS2010中优化了localtime函数为localtime_s()函数 -> Security  
		
		if (data_time->tm_sec >= 10)
		{
			cout << data_time->tm_hour << ":" << data_time->tm_min << ":" << data_time->tm_sec;
		}
		else
		{
			cout << data_time->tm_hour << ":" << data_time->tm_min << ":0" << data_time->tm_sec;
		}
		Sleep(1000);
	}
	return 0;
}


