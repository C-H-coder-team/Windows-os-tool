#include"Display_Time.h"
#include"KMS.h"
#include"shutdown.h"
#include"Python_install.h"
#include"snake_main.h"
#include"plane_main.h"
#include"guess_number.h"
//Í·ÎÄ¼þ¡¢ÃüÃû¿Õ¼äµ÷ÓÃ
int main()
{
	cout << "welcome to this os tools!" << endl
		<< "1.activate the system by kms." << endl
		<< "2.system power tools." << endl
		<< "3.the time of now." << endl
		<< "4.install some moudles of python" << endl
		<< "5.play some games." << endl
		<< "0.informaiton of the coder." << endl;
	short i;
	cin >> i;
	system("cls");
	if (i == 1)KMS();
	if (i == 2)shutdown();
	if (i == 3)Display_Localtime();
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
	if (i == 0) 
	{
		cout << "coder:fanjun" << endl;
		Sleep(500);
		cout << "version:v2.0 release" << endl;
		Sleep(500);
		cout << "program time: 2021/04/11" << endl;
		Sleep(1000);
	}
	return 0;
}
