#pragma once
class AActor
{
public:
	AActor(int InX = 0, int InY = 0, char InMesh = ' ')
		: X(InX), Y(InY), Mesh(InMesh) {};
	virtual ~AActor();

	virtual void BeginPlay();
	virtual void Tick();
	virtual void Render();

protected:
	int X;
	int Y;

	char Mesh;
};

