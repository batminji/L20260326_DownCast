#pragma once
#include <vector>

class AActor;
class UWorld;

class UEngine
{
protected:
	UEngine();

	static UEngine* Instance;
public:
	~UEngine();

	static UEngine* GetInstance()
	{
		if ( Instance == nullptr )
		{
			Instance = new UEngine(); // 없으면 생성
		}
		return Instance;
	}

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
	static int KeyCode;
};

#define GEngine			UEngine::GetInstance()