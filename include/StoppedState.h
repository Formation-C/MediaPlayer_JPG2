#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include <State.h>


class StoppedState : public State
{
    // Calling parent's constructor
    using State::State;
    //StoppedState::StoppedState(Player * _state) : State(_state)
    //{
    //    //ctor
    //}

    public:
        StoppedState();
        virtual ~StoppedState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // STOPPEDSTATE_H
