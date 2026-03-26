#include "stdafx.h"
#include "Floor.h"

AFloor::AFloor(FVector2D InLocation, int InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

AFloor::~AFloor()
{
}