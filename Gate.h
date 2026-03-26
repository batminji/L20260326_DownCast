#pragma once
#include "Actor.h"
class AGate : public AActor
{
public:
	AGate(int InX = 0, int InY = 0, char InMesh = 'G');
	virtual ~AGate();

	virtual void Render() override;
};

