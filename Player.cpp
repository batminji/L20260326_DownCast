#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	std::cout << "APlayer 생성자 호출" << std::endl;
}

APlayer::~APlayer()
{
	std::cout << "APlayer 소멸자 호출" << std::endl;
}

void APlayer::BeginPlay()
{
}

void APlayer::Tick()
{
}

void APlayer::Render()
{
}