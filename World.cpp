#include "stdafx.h"
#include "World.h"
#include "Actor.h"

#include "Player.h"
#include "Wall.h"
#include "Floor.h"
#include "Gate.h"
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
	std::ifstream MapStream(MapName);

	if ( !MapStream.is_open() )
	{
		return;
	}

	int Y = 0;

	while ( !MapStream.eof() )
	{
		std::string Line;
		std::getline(MapStream, Line);
		for ( int X = 0; X < Line.length(); ++X )
		{
			char Tile = Line[X];

			SpawnActor<AFloor>()->SetActorLocation({ X, Y });
			switch ( Tile )
			{
			case '#':
				SpawnActor<AWall>()->SetActorLocation({ X, Y });
				break;
			case 'P':
				SpawnActor<APlayer>()->SetActorLocation({ X, Y });
				break;
			case 'M':
				SpawnActor<AMonster>()->SetActorLocation({ X, Y });
				break;
			case 'G':
				SpawnActor<AGate>()->SetActorLocation({ X, Y });
				break;
			case ' ':
				break;
			default:
				break;
			}
		}
		Y++;
	}

	MapStream.close();
}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		APlayer* Temp = dynamic_cast<APlayer*>(Actor);
		if ( Temp )
		{
			// Temp->AddActorLocalOffset(GetDirection(UEngine::KeyCode));
		}
		else
		{
			Actor->Tick();
		}
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}

FVector2D UWorld::GetDirection(int InKeyCode)
{
	switch ( InKeyCode )
	{
	case 'w':
		return { 0, -1 };
		break;
	case 's':
		return { 0, 1 };
		break;
	case 'a':
		return { -1, 0 };
		break;
	case 'd':
		return { 1, 0 };
		break;
	default:
		break;
	}
	return {0, 0};
}
