//#include "stdafx.h"
#include "Player.h"

APlayer::APlayer(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

APlayer::~APlayer()
{
}

void APlayer::BeginPlay()
{
}

void APlayer::Tick()
{
}

void APlayer::Render()
{
	__super::Render();
}