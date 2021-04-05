#include"Display_Time.h"
#include"KMS.h"
#include"shutdown.h"
using namespace std;
//头文件、命名空间调用
int main()
{
	cout << "welcome to this os tools!" << endl
		<< "1.activate the system by kms." << endl
		<< "2.system power tools." << endl
		<< "3.the time of now." << endl
		<< "4.informaiton of the coder." << endl;
	short i;
	cin >> i;
	system("cls");
	if (i == 1)KMS();
	if (i == 2)shutdown();
	if (i == 3)Display_Localtime();
	if (i == 4) 
	{
		cout << "coder:fanjun" << endl;
		Sleep(500);
		cout << "version:v1.0 beta" << endl;
		Sleep(500);
		cout << "program time: 2021/04/05" << endl;
		Sleep(1000);
	}
	return 0;
}