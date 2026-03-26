#include "stdafx.h"
#include "Monster.h"

AMonster::AMonster(FVector2D InLocation, int InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

AMonster::~AMonster()
{
}