#include"Display_Time.h"
#include"KMS.h"
#include"shutdown.h"
#include"Python_install.h"
#include"snake_main.h"
#include"plane_main.h"
#include"guess_number.h"
#include"mather.h"
#include"capital.h"
//头文件、命名空间调用
int main()
{
	system("color BD");
	charcom charcom;

	{
		cout << "welcome to this os tools!" << endl
			<< "1.activate the system by kms." << endl
			<< "2.system power tools." << endl
			<< "3.the time of now." << endl
			<< "4.install some moudles of python" << endl
			<< "5.play some games." << endl
			<< "6.some maths function." << endl
			<< "7.download the website's video" << endl
			<< "0.informaiton of the coder." << endl;
	}
	short i;
	cin >> i;
	system("cls");
	if (i == 1)KMS();
	if (i == 2)shutdown();
	if (i == 3)Display_Localtime(60);
	if (i == 4)python_install();
	if (i == 5)
	{
		cout << "What will you play?" << endl
			<< "1.guess number" << endl
			<< "2.greedy snake" << endl
			<< "3.plane wars" << endl;
		cin >> i;
		system("cls");
		cout << "loading......" << endl;
		Sleep(1500);
		system("cls");
		if (i == 1)guess_number();
		if (i == 2)snake_start();
		if (i == 3)plane_start();
	}
	if (i == 6)
	{
		cout << "1.get sum." << endl
			<< "2.get avg." << endl
			<< "3.get countif." << endl
			<< "4.get random." << endl
			<<"5.get string's length"<<endl;
		short maths;
		cin >> maths;
		system("cls");
		cout << "loading……" << endl;
		Sleep(750);
		cout << "load over!" << endl;
		system("cls");
		
		if(maths==1)
		{
			short totel, num;
			cout << "输入总数：";
			cin >> num;
			system("cls");
			totel = sum(num);
			system("cls");
			cout << "totel: " << totel;
			cout << endl;
			system("pause");
		}

		if (maths == 2)
		{
			long double totel, num;
			cout << "输入总数：";
			cin >> num;
			system("cls");
			totel = avg(num);
			system("cls");
			cout << "totel: " << totel;
			cout << endl;
			system("pause");

		}

		if (maths == 3)
		{
			double totel, num; 
			cout << "输入条件：";
			cin >> num;
			system("cls");
			totel = countif(num);
			system("cls");
			cout <<"totel: "<< totel;
			cout << endl;
			system("pause");

		}

		if (maths == 4)
		{
			long totel, st,en;
			cout << "输入起始条件(>=0)：";
			cin >> st;
			cout << endl;
			cout << "输入结束条件(>st)：";
			cin >> en;
			system("cls");
			totel = randoms(st,en);
			system("cls");
			cout << "random: " << totel;
			cout << endl;
			system("pause");

		}

		if (maths == 5)
		{
			string str;
			short totel;
			cout << "输入字符串：";
			cin >> str;
			totel = str.size();
			system("cls");
			cout << "totel: " << totel;
			cout << endl;
			system("pause");

		}
	}

	if (i == 7) 
	{
		string link;
		cout << "所需视频下载地址：";
		cin >> link;
		freopen("video.config", "w", stdout);
		cout<<link;
		fclose(stdout);
		system("start downloader.exe");
	}
	if (i == 0) 
	{
		cout << "coder:fanjun" << endl;
		Sleep(500);
		cout << "version:v5.0 release" << endl;
		Sleep(500);
		cout << "program time: 2021/08/12" << endl;
		Sleep(1000);
		system("pause");
	}

	return 0;
}
