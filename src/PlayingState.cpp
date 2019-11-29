#include <iostream>
#include "PlayingState.h"
#include "State.h"


PlayingState::~PlayingState()
{
    //dtor
}

void PlayingState::onPlay()
{
    std::cout << player->pausePlayback() << std::endl;
}

void PlayingState::onStop()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->stopPlayback() << std::endl;
    delete this;
}
