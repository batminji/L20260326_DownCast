#pragma once
#include "Actor.h"

class AFloor : public AActor
{
public:
	AFloor(int InX = 0, int InY = 0, int InMesh = ' ');
	virtual ~AFloor();

	virtual void Render() override;
};

