#pragma once
#include <vector>

class AActor;
class UWorld;

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();
	void Terminate();

	void Run();

	inline UWorld* GetWorld() const
	{
		return World;
	}

protected:
	void Input();
	void Tick();
	void Render();

	UWorld* World;

	int bIsRunning : 1;
};

