#include "World.h"
#include "Actor.h"

#include "Player.h"
#include "Wall.h"
#include "Floor.h"
#include "Gate.h"
#include "Monster.h"

#include <fstream>

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
	std::ifstream File(MapName);

	if ( !File.is_open() )
	{
		return;
	}

	std::string Line;
	int Y = 0;

	while ( std::getline(File, Line) )
	{
		for ( int X = 0; X < ( int )Line.length(); ++X )
		{
			char Tile = Line[X];

			SpawnActor<AFloor>(X, Y);

			switch ( Tile )
			{
			case '#':
				SpawnActor<AWall>(X, Y);
				break;
			case 'P':
				SpawnActor<APlayer>(X, Y);
				break;
			case 'M':
				SpawnActor<AMonster>(X, Y);
				break;
			case 'G':
				SpawnActor<AGate>(X, Y);
				break;
			case '_':
				break;
			}
		}
		Y++;
	}

	File.close();
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