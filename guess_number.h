#pragma once
#ifndef GUESS_NUNBER_H
#define GUESS_NUMBER_H
#include"stdc++.h"
void guess_number()
{
int a;
int input;
bool i;
i = true;	//确定bool的值 
srand(time(0)); //随机数因子 
while (i = true)
{
	a = 1 + rand() % 100;

	for (;;)
	{
		cout << "猜数：1—100" << endl;

		cin >> input;

		if (input>a)cout << "大了" << endl;

		if (input<a)cout << "小了" << endl;

		if (input == a)i = false;
	}
	cout << "正确！";
}


}

#endif // !GUESS_NUNBER_H
