#pragma once
#include <vector>
#include <string>

class AActor;

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
	AActor* SpawnActor(int InX, int InY) // template function
	{
		AActor* NewActor = new T(InX, InY);
		Actors.push_back(NewActor);

		return NewActor;
	}

	template<typename T>
	AActor* SpawnActor(int InX, int InY, char InMesh) // template function
	{
		AActor* NewActor = new T(InX, InY, InMesh);
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

protected:
	std::vector<class AActor*> Actors;
};

