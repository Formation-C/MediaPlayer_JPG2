#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include <State.h>


class PlayingState : public State
{
    using State::State;

    public:
        PlayingState();
        virtual ~PlayingState();

        void onPlay();
        void onStop();
    protected:

    private:
};

#endif // PLAYINGSTATE_H
