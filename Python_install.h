#pragma once
#ifndef PYTHON_INSTALL_H
#define PYTHON_INSTALL_H
#include"stdc++.h"
void python_install()
{
	system("ping python.org");
	cout << "important information:" << endl
		<< "1.you have a python on the computer.(the version>3.0)" << endl
		<< "2.you are open the pip options." << endl
		<< "3.you connect to the internet and the network is good.(ping python.org <= 300ms)" << endl
		<< "4.the os is Mircosoft Windows." << endl
		<< "if you are All satisfied,you type the key<Y>.if you aren't Satisfy on anyone,you type any key(expect key<Y>)"<<endl;
	char i1;
	cin >> i1;
	if (i1 == 'Y' || i1 == 'y')
	{
		Sleep(500);
		system("pip install --upgrade setuptools");
		Sleep(500);
		system("pip install pygame");
		Sleep(500);
		system("pip install pysocket");
		Sleep(500);
		system("pip install pillow");
		Sleep(500);
		system("pip install tornado");
		Sleep(500);
		system("pip install mysql-connector");
		Sleep(500);
		system("pip install pymongo");
		Sleep(500);
		system("pip install SQLAlchemy");
		Sleep(500);
		system("pip install mongoengine");
		Sleep(500);
		system("pip install django");
		Sleep(500);
		system("pip install flask");
		Sleep(500);
		system("pip install cp");
		Sleep(500);
		system("pip install girlfriend");
		Sleep(500);
		system("pip install boyfriend");
		Sleep(500);
		system("pip install pygal");
		Sleep(500);
		system("pip install matplotlib");
		Sleep(500);
		system("pip install robot");
		Sleep(500);
		system("pip install pyos");
		Sleep(500);
		system("pip install cpython");
		Sleep(500);
		system("pip install pyftp");
		Sleep(500);
		system("pip install line");
		Sleep(500);
		system("pip install pyserver");
		Sleep(500);
		system("pip install math");
		Sleep(500);
		system("pip install pycom");
		Sleep(500);
		system("pip install download");
		Sleep(500);
		system("pip install port");
		Sleep(500);
		system("pip install language");
		Sleep(500);
		system("pip install geometry");
		Sleep(500);
		system("pip install pyapp");
		Sleep(500);
		system("pip install pycode");
		Sleep(500);
		system("pip install pyhttp");
		Sleep(500);
		system("pip install pyline");
		Sleep(500);
		system("pip install upload");
		Sleep(500);
		system("pip install pyinstaller");
		Sleep(500);
		cout << endl<<"install over";
	}
}
#endif