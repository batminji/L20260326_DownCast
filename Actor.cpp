#include "stdafx.h"
#include "Actor.h"

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
	Coordinate.X = X * 2;
	Coordinate.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate); // Window API

	std::cout << Mesh;
}