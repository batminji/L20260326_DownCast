// #include "stdafx.h"
#include "Floor.h"
#include <iostream>
#include <Windows.h>

AFloor::AFloor(int InX, int InY, int InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

AFloor::~AFloor()
{
}

void AFloor::Render()
{
	__super::Render();
}
