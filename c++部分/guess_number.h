#pragma once
#ifndef GUESS_NUNBER_H
#define GUESS_NUMBER_H
#include"stdc++.h"
void guess_number()
{
int a;
int input;
bool i;
i = true;	//ȷ��bool��ֵ 
srand(time(0)); //��������� 
while (i = true)
{
	a = 1 + rand() % 100;

	for (;;)
	{
		cout << "������1��100" << endl;

		cin >> input;

		if (input>a)cout << "����" << endl;

		if (input<a)cout << "С��" << endl;

		if (input == a)i = false;
	}
	cout << "��ȷ��";
}


}

#endif // !GUESS_NUNBER_H
