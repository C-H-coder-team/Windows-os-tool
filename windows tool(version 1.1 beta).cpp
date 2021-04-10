#include"Display_Time.h"
#include"KMS.h"
#include"shutdown.h"
#include"Python_install.h"
//头文件、命名空间调用
int main()
{
	cout << "welcome to this os tools!" << endl
		<< "1.activate the system by kms." << endl
		<< "2.system power tools." << endl
		<< "3.the time of now." << endl
		<< "4.install some moudles of python" << endl
		<< "5.informaiton of the coder." << endl;
	short i;
	cin >> i;
	system("cls");
	if (i == 1)KMS();
	if (i == 2)shutdown();
	if (i == 3)Display_Localtime();
	if (i == 4)python_install();
	if (i == 5) 
	{
		cout << "coder:fanjun" << endl;
		Sleep(500);
		cout << "version:v1.1 beta" << endl;
		Sleep(500);
		cout << "program time: 2021/04/10" << endl;
		Sleep(1000);
	}
	return 0;
}
