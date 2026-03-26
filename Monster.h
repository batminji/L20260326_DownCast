#pragma once
#include "Actor.h"
class AMonster : public AActor
{
public:
	AMonster(int InX = 0, int InY = 0, int InMesh = 'M');
	virtual ~AMonster();

	virtual void Render() override;
};

