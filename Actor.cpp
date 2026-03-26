#include "Actor.h"
#include <iostream>
#include <Windows.h>

AActor::~AActor()
{
}

void AActor::BeginPlay()
{

}

void AActor::Tick()
{

}

void AActor::Render()
{
	COORD Coordinate;
	Coordinate.X = X;
	Coordinate.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate); // Window API

	std::cout << Mesh;
}