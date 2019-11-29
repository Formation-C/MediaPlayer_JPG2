#ifndef PAUSESTATE_H
#define PAUSESTATE_H

#include <State.h>


class PauseState : public State
{
    using State::State;

    public:
        PauseState();
        virtual ~PauseState();
        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PAUSESTATE_H
