#include "stdafx.h"

#include "Engine.h"
#include "World.h"

int main()
{
	// Engine 초기화 (World 생성)
	GEngine->GetInstance();

	// 생성된 World에 level 로드
	GEngine->GetWorld()->Load("NewLevel.txt");
	
	GEngine->Run();

	delete GEngine;

	return 0;
}