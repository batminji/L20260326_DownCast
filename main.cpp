#include "Actor.h"
#include "Player.h"

int main()
{
	AActor* MyActor = new APlayer();
	
	APlayer* Player = dynamic_cast<APlayer*>(MyActor);
	if (Player)
	{
		Player->ApplyDamage(Player);
	}

	delete MyActor;

	return 0;
}