#ifndef STATE_H
#define STATE_H

class Player;

class State
{
    public:
        State(Player *_player);
        virtual ~State();

        Player *Getplayer() { return player; }
        void   Setplayer(Player *val) { player = val; }

        virtual void onPlay() = 0;
        virtual void onStop() = 0;
        //virtual void onPause() = 0;
        //virtual void onPrevious() = 0;
        //virtual void onNext() = 0;

    protected:
        Player *player;

    private:
};
#include "Player.h"


#endif // STATE_H
