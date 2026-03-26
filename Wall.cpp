#include "stdafx.h"
#include "Wall.h"

AWall::AWall(FVector2D InLocation, char InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

AWall::~AWall()
{
}
