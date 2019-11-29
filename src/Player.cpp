#include "Player.h"

Player::Player()
{
    Setplaying(false);
    SetcurrentTrack(0);

    trackList = new std::vector<std::string>();
    // Initialize track list
    trackList->push_back("Track 01 - Sultans of Swing");
    trackList->push_back("Track 02 - Communique");
    trackList->push_back("Track 03 - Romeo & Juliet");
    trackList->push_back("Track 04 - Why Worry");
    trackList->push_back("Track 05 - So Far Away");
    trackList->push_back("Track 06 - Money For Nothing");
    trackList->push_back("Track 07 - Where Do You Think We\'re Going");
    trackList->push_back("Track 08 - Brothers In Arms");
    trackList->push_back("Track 09 - Calling Elvis");
    trackList->push_back("Track 10 - You and Your Friend");
    trackList->push_back("Track 11 - Heavy Fuel");
    for(int ii = 11; ii < 12; ii++)
    {
        trackList->push_back("Track " + std::to_string(ii+1) + " - ");
    }
}

Player::~Player()
{
    delete trackList;
}
