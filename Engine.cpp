#include "stdafx.h"
#include "Engine.h"
#include "Actor.h"
#include "World.h"

#include <conio.h>

UEngine* UEngine::Instance = nullptr;
int UEngine::KeyCode = 0;

UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Terminate();
}

void UEngine::Init()
{
	bIsRunning = true;
	KeyCode = 0;

	World = new UWorld();
}

void UEngine::Terminate()
{
	delete World;
	World = nullptr;
}

void UEngine::Run()
{
	while ( bIsRunning )
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::Input()
{
	//if ( _kbhit() ) // Key input이 있을 때
	//{
	//	KeyCode = _getch();
	//}
	KeyCode = _getch();
}

void UEngine::Tick()
{
	World->Tick();
}

void UEngine::Render()
{
	World->Render();
}
