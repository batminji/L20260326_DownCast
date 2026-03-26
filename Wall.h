#pragma once
#include "Actor.h"
class AWall : public AActor
{
public:
	AWall(FVector2D InLocation = {0, 0}, char InMesh = '#');
	virtual ~AWall();
};

