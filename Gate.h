#pragma once
#include "Actor.h"
class AGate : public AActor
{
public:
	AGate(FVector2D InLocation = { 0, 0 }, char InMesh = 'G');
	virtual ~AGate();
};

