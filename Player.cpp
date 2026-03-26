#include "stdafx.h"
#include "Player.h"
#include "Engine.h"

APlayer::APlayer(FVector2D InLocation, char InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	__super::Tick();
	if ( UEngine::KeyCode == 'w' )
	{
		Location.Y--;
	}
	if ( UEngine::KeyCode == 's' )
	{
		Location.Y++;
	}
	if ( UEngine::KeyCode == 'a' )
	{
		Location.X--;
	}
	if ( UEngine::KeyCode == 'd' )
	{
		Location.X++;
	}
}

