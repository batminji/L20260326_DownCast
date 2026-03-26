#pragma once
#include <vector>

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	template<typename T>
	AActor* SpawnActor() // template function
	{
		AActor* NewActor = new T;
		Actors.push_back(NewActor);

		return NewActor;
	}

	inline std::vector<AActor*>& GetActors()
	{
		return Actors;
	}

protected:
	std::vector<class AActor*> Actors;
};

