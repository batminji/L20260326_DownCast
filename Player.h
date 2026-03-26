#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void BeginPlay() override;
	virtual void Tick() override;
	virtual void Render() override;

	void Attack();
	void ApplyDamage(AActor* AttackActor);
};

