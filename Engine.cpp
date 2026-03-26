#include "stdafx.h"
#include "Engine.h"
#include "Actor.h"
#include "World.h"

#include <conio.h>

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
	// int KeyCode = _getch();
}

void UEngine::Tick()
{
	World->Tick();
}

void UEngine::Render()
{
	World->Render();
}
