#include "Gate.h"

AGate::AGate(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

AGate::~AGate()
{
}

void AGate::Render()
{
	__super::Render();
}
