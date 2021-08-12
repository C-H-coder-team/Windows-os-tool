#pragma once
#ifndef SHUTDOWN_H
#define SHUTDOWN_H
#include"stdc++.h"
string shutdown()
{
	char input;
	short ch;
	cout << "Menu:" << endl
		<< "1.close the os" << endl
		<< "2.restart the os" << endl
		<< "3.sleep the os" << endl
		<< "4.shutdown power plan" << endl;

	
	scanf_s("%c", &input);
	if(input=='1')
	{
		{
			cout << "close the os Menu:" << endl
				<< "1.close the os now." << endl
				<< "2.close the os 1 minute later." << endl
				<< "3.close the os 5 minutes later." << endl
				<< "4.close the os 10 minutes later" << endl
				<< "5.close the os 20 minutes later" << endl
				<< "6.close the os 30 minutes later" << endl
				<< "7.close the os 1 hour later" << endl
				<< "8.close the os 2 hours later" << endl
				<< "9.close the os 3 hours later" << endl
				<< "10.close the os a quarter of a day" << endl
				<< "11.close the os a half past a day" << endl;
		}
		short ch;
		cin >> ch;
		{
			if (ch == 1)system("shutdown /s /t 0");
			if (ch == 2)system("shutdown /s /t 60");
			if (ch == 3)system("shutdown /s /t 300");
			if (ch == 4)system("shutdown /s /t 600");
			if (ch == 5)system("shutdown /s /t 1200");
			if (ch == 6)system("shutdown /s /t 1800");
			if (ch == 7)system("shutdown /s /t 3600");
			if (ch == 8)system("shutdown /s /t 7200");
			if (ch == 9)system("shutdown /s /t 10800");
			if (ch == 10)system("shutdown /s /t 21600");
			if (ch == 11)system("shutdown /s /t 43200");
		}
		}

	if (input == '2')
	{
		{
			cout << "restart the os Menu:" << endl
				<< "1.restart the os now." << endl
				<< "2.restart the os 1 minute later." << endl
				<< "3.restart the os 5 minutes later." << endl
				<< "4.restart the os 10 minutes later" << endl
				<< "5.restart the os 20 minutes later" << endl
				<< "6.restart the os 30 minutes later" << endl
				<< "7.restart the os 1 hour later" << endl
				<< "8.restart the os 2 hours later" << endl
				<< "9.restart the os 3 hours later" << endl
				<< "10.restart the os a quarter of a day" << endl
				<< "11.restart the os a half past a day" << endl;
		}
		short ch;
		cin >> ch;
		{
			if (ch == 1)system("shutdown /r /t 0");
			if (ch == 2)system("shutdown /r /t 60");
			if (ch == 3)system("shutdown /r /t 300");
			if (ch == 4)system("shutdown /r /t 600");
			if (ch == 5)system("shutdown /r /t 1200");
			if (ch == 6)system("shutdown /r /t 1800");
			if (ch == 7)system("shutdown /r /t 3600");
			if (ch == 8)system("shutdown /r /t 7200");
			if (ch == 9)system("shutdown /r /t 10800");
			if (ch == 10)system("shutdown /r /t 21600");
			if (ch == 11)system("shutdown /r /t 43200");
		}
	}

	if (input == '3')
	{
		{
			cout << "sleep the os Menu:" << endl
				<< "1.sleep the os now." << endl
				<< "2.sleep the os 1 minute later." << endl
				<< "3.sleep the os 5 minutes later." << endl
				<< "4.sleep the os 10 minutes later" << endl
				<< "5.sleep the os 20 minutes later" << endl
				<< "6.sleep the os 30 minutes later" << endl
				<< "7.sleep the os 1 hour later" << endl
				<< "8.sleep the os 2 hours later" << endl
				<< "9.sleep the os 3 hours later" << endl
				<< "10.sleep the os a quarter of a day" << endl
				<< "11.sleep the os a half past a day" << endl;
		}
		
		cin >> ch;
		{
			if (ch == 1)system("shutdown /h /t 0");
			if (ch == 2)system("shutdown /h /t 60");
			if (ch == 3)system("shutdown /h /t 300");
			if (ch == 4)system("shutdown /h /t 600");
			if (ch == 5)system("shutdown /h /t 1200");
			if (ch == 6)system("shutdown /h /t 1800");
			if (ch == 7)system("shutdown /h /t 3600");
			if (ch == 8)system("shutdown /h /t 7200");
			if (ch == 9)system("shutdown /h /t 10800");
			if (ch == 10)system("shutdown /h /t 21600");
			if (ch == 11)system("shutdown /h /t 43200");
		}
	}
	
	if (input == '4')system("shutdown /a");

	return "over";
}

#endif // !SHUTDOWN
