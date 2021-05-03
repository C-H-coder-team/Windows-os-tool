#pragma once
#ifndef MATHER_H
#define MATHER_H
#include"stdc++.h"
#define maxi 65536

static long double sum(short num)
{
	long ones[maxi];
	long double s;
	for (short i = 0; i < num; i++)
	{
		cin >> ones[i];
	}
	for (short i = 0; i < num; i++)
	{
		s = s + ones[i];
	}
	return s;
}

static long double avg(short num)
{
	long ones[maxi];
	long double s, rt;
	for (short i = 0; i < num; i++)
	{
		cin >> ones[i];
	}
	for (short i = 0; i < num; i++)
	{
		s = s + ones[i];
	}
	rt = s / num;
	return rt;
}

static long long int countif(long double console)
{
	long ones;
	long long int count;
	while (cin >> ones)
	{
		if (ones == console) 
		{
			count++;
		}
	}
	return count;
}

static long random(unsigned int start,unsigned int end)
{
	srand(time(NULL));
	long rt,qj;
	qj = end - start;
	
	rt = rand() % qj + start;
	return rt;
}

static short stringlong(string input)
{
	short length;
	length = input.size();
	return length;
}
#endif