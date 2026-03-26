#include "stdafx.h"
#include "Player.h"

APlayer::APlayer(FVector2D InLocation, char InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

APlayer::~APlayer()
{
}

