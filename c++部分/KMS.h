#pragma once
#ifndef KMS_H
#define KMS_H
#include"stdc++.h"
class kms
{
public:
	kms();
public:
	~kms();
public:
	void win10_1();
public:
	void win10_2();
public:
	void win10_3();
public:
	void win10_4();
public:
	void win10_5();
public:
	void win10_6();
};
kms::kms()
{

}
kms::~kms()
{

}
void kms::win10_1()
{
	system("slmgr /ipk NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
}
void kms::win10_2()
{
	system("slmgr /ipk M7XTQ-FN8P6-TTKYV-9D4CC-J462D");
}
void kms::win10_3() 
{
	system("slmgr /ipk DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ");
}
void kms::win10_4()
{
	system("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
}
void kms::win10_5()
{
	system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
}
void kms::win10_6()
{
	system("slmgr /ipk 37GNV-YCQVD-38XP9-T848R-FC2HD");
}
bool KMS()
{
	kms kms;
	short xt;
	{
			cout << "��ѡ���Ӧϵͳ��" << endl
				<< "1.win10 edu ������" << endl
				<< "2.win10 ltsc ������" << endl
				<< "3.win10 ltsb �˸��" << endl
				<< "4.win10 ltd ��ҵ��" << endl
				<< "5.win10 רҵ��" << endl
				<< "6.win10 home ��ͥ��" << endl;
			cin >> xt;
		}

	if (xt == 6)
	{
		kms.win10_6();
		printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
		system("slmgr /skms kms.03k.org");
		printf("���ڽ��м�����Եȡ���");
		system("slmgr /ato");
	}

	if (xt == 5)
	{
		kms.win10_5();
		printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
		system("slmgr /skms kms.03k.org");
		printf("���ڽ��м�����Եȡ���");
		system("slmgr /ato");
	}

	if (xt == 4)
	{
		kms.win10_4();
		printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
		system("slmgr /skms kms.03k.org");
		printf("���ڽ��м�����Եȡ���");
		system("slmgr /ato");
	}

	if (xt == 3)
	{
		kms.win10_3();
		printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
		system("slmgr /skms kms.03k.org");
		printf("���ڽ��м�����Եȡ���");
		system("slmgr /ato");
	}

	if (xt == 2)
	{
		kms.win10_2();
		printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
		system("slmgr /skms kms.03k.org");
		printf("���ڽ��м�����Եȡ���");
		system("slmgr /ato");
	}

	if (xt == 1)
	{
		kms.win10_1();
		printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
		system("slmgr /skms kms.03k.org");
		printf("���ڽ��м�����Եȡ���");
		system("slmgr /ato");

	}

	return true;
}

#endif // !KMS_H
