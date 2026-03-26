#pragma once
#include "stdafx.h"

#include "Actor.h"

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	template<typename T>
	AActor* SpawnActor() // template function
	{
		AActor* NewActor = new T();
		Actors.push_back(NewActor);

		return NewActor;
	}

	void Load(std::string MapName);

	inline std::vector<AActor*>& GetActors()
	{
		return Actors;
	}

	void Tick();
	void Render();

	FVector2D GetDirection(int InKeyCode);

protected:
	std::vector<class AActor*> Actors;
};

