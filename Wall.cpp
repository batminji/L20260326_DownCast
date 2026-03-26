// #include "stdafx.h"
#include "Wall.h"
#include <iostream>
#include <Windows.h>

AWall::AWall(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

AWall::~AWall()
{
}

void AWall::Render()
{
	COORD Coordinate;
	Coordinate.X = X;
	Coordinate.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate); // Window API

	std::cout << Mesh;
}
