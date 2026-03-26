#pragma once
struct FVector2D
{
	int X;
	int Y;
};

class AActor
{
public:
	AActor(FVector2D InLocation = {0, 0}, char InMesh = ' ')
		: Location(InLocation), Mesh(InMesh) {};
	virtual ~AActor();

	virtual void BeginPlay();
	virtual void Tick();
	virtual void Render();

	void SetActorLocation(FVector2D NewLocation);
protected:
	FVector2D Location;
	char Mesh;
};

