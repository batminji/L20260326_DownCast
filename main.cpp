#include "Engine.h"
#include "World.h"

int main()
{
	// Engine 초기화 (World 생성)
	UEngine* MyEngine = new UEngine();

	// 생성된 World에 level 로드
	MyEngine->GetWorld()->Load("NewLevel.txt");
	
	MyEngine->Run();

	delete MyEngine;

	return 0;
}