#include "stdafx.h"
#include "Actor.h"

AActor::~AActor()
{
}

void AActor::BeginPlay()
{

}

void AActor::Tick()
{

}

void AActor::Render()
{
	COORD Coordinate;
	Coordinate.X = Location.X * 2;
	Coordinate.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate); // Window API

	std::cout << Mesh;
}

void AActor::SetActorLocation(FVector2D NewLocation)
{
	Location = NewLocation;
}

void AActor::AddActorLocalOffset(FVector2D LocalOffset)
{
	Location.X += LocalOffset.X;
	Location.Y += LocalOffset.Y;
}
