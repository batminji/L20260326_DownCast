#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer(FVector2D InLocation = {1, 1}, char InMesh = 'P');
	virtual ~APlayer();
};

