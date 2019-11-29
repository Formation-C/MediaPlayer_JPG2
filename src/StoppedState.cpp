#include <iostream>
#include "StoppedState.h"
#include "PlayingState.h"
#include "State.h"


StoppedState::~StoppedState()
{
    //dtor
}

void StoppedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayback() << std::endl;
    delete this;
}

void StoppedState::onStop()
{
    std::cout << "Error" << std::endl;
}
