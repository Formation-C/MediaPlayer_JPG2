#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

class State;

class Player
{
    public:
        Player();
        virtual ~Player();

        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::vector<std::string> *Gettracklist() { return trackList; }
        void Settracklist(std::vector<std::string> *val) { trackList = val; }
        int GetcurrentTrack() { return currentTrack; }
        void SetcurrentTrack(int val) { currentTrack = val; }
        State *Getstate() { return state; }
        void Setstate(State *val) { state = val; }

        std::string startPlayback();
        std::string pausePlayback();
        std::string stopPlayback();
        std::string previousTrack();
        std::string nextTrack();

    protected:

    private:
        bool playing;
        int currentTrack;
        std::vector<std::string> *trackList;
        State *state;
};

#include "State.h"
#include "StoppedState.h"

#endif // PLAYER_H
