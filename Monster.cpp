#include "stdafx.h"
#include "Monster.h"

AMonster::AMonster(int InX, int InY, int InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

AMonster::~AMonster()
{
}

void AMonster::Render()
{
	__super::Render();
}
