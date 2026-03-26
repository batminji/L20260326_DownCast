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

	template<typename T>
	AActor* SpawnActor(FVector2D InLocation, char InMesh) // template function
	{
		AActor* NewActor = new T(InLocation, InMesh);
		Actors.push_back(NewActor);

		return NewActor;
	}

	void Load(std::string MapName);

	inline std::vector<AActor*>& GetActors()
	{
		return Actors;
	}
	void Tick(int KeyCode);
	void Render();

protected:
	std::vector<class AActor*> Actors;
};

