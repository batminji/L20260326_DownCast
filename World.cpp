#include "World.h"
#include "Actor.h"

#include "Player.h"
#include "Wall.h"
#include "Floor.h"
#include "Monster.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}

void UWorld::Load(std::string MapName)
{
	for ( int i = 0; i < 10; ++i )
	{
		for ( int j = 0; j < 10; ++j )
		{
			if ( i == 0 || i == 9 || j == 0 || j == 9 )
			{
				SpawnActor<AWall>(i, j);
			}
			else
			{
				SpawnActor<AFloor>(i, j);
			}
		}
	}

	SpawnActor<APlayer>(1, 1);
	SpawnActor<AMonster>(2, 2);
}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}