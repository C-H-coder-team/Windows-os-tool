#pragma once
#ifndef PLANE_MAIN_H
#define PLANE_MAIN_H
#include"stdc++.h" 
#include"plane_struct.h"
#include"plane_funcation.h"
#include"plane_class.h" 

void plane_start()
{
	//��Ϸ׼��  
	srand((int)time(0));    //�������  
	HideCursor();   //���ع��  

	Game game;
	int a = drawMenu();
	if (a == 2)
		game.rank = 20;
	system("cls");
	drawPlaying();
	game.Playing();
}
#endif