#include "Engine.h"
#include "Actor.h"

UEngine::UEngine()
{
}

UEngine::~UEngine()
{
}

void UEngine::Init()
{
}

void UEngine::Terminate()
{
}

void UEngine::Run()
{
}

void UEngine::SpawnActor(const AActor* NewActor)
{
}

std::vector<AActor*> UEngine::GetAllActorsOfClass()
{
	return std::vector<AActor*>();
}

void UEngine::Input()
{
}

void UEngine::Tick()
{
	for ( auto& Actor : Actors )
	{
		Actor->Tick();
	}
}

void UEngine::Render()
{
}
