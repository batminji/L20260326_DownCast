#include "stdafx.h"

#include "Engine.h"
#include "World.h"

class Singleton
{
private:
	Singleton();

	static Singleton* Instance;

public:
	static Singleton* GetInstance()
	{
		if ( Instance == nullptr )
		{
			Instance = new Singleton(); // 없으면 생성
		}
		return Instance;
	}
};

Singleton* Singleton::Instance = nullptr;

int main()
{
	Singleton* My = Singleton::GetInstance();

	return 0;
	// Engine 초기화 (World 생성)
	UEngine* MyEngine = new UEngine();

	// 생성된 World에 level 로드
	MyEngine->GetWorld()->Load("NewLevel.txt");
	
	MyEngine->Run();

	delete MyEngine;

	return 0;
}