#pragma once
#include <vector>

class AActor;

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();
	void Terminate();

	void Run();

	void SpawnActor(const AActor* NewActor);
	std::vector<AActor*> GetAllActorsOfClass();

protected:
	void Input();
	void Tick();
	void Render();

	std::vector<AActor*> Actors;
};

