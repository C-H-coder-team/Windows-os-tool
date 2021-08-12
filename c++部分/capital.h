#pragma once
#ifndef CAPITAL_H
#define CAPITAL_H
#include"stdc++.h"
class charcom 
{
public:
	charcom();
public:
	 char tosmall(char input);
public:
	 char tocapital(char input);
};
charcom::charcom()
{

}
char charcom::tosmall(char input)
{
	input = input + 32;
	return input;
}
char charcom::tocapital(char input)
{
	input = input - 32;
	return input;
}
#endif