#include <iostream>
#include <algorithm>
#include <string>
#include "Player.h"


using namespace std;

int main()
{
    string input;

    Player *player = new Player();
    for_each(player->Gettracklist()->begin(),
             player->Gettracklist()->end(),
             [](string trackName) {cout << trackName << endl;}
             );

    cout << endl;

    while(input != "exit")
    {
        cout << "Input command: ";
        cin >> input;

        try
        {
            if(input == "play")
            {
                player->Getstate()->onPlay();
            }
            else if(input == "stop")
            {
                player->Getstate()->onStop();
            }
            else
            {
                throw "Unknown command";
                //cout << "Unknown command" << endl;
            }
        }

        catch (char const* errorMessage)
        {
            cout << "Error: " << errorMessage << endl;
        }


    }
    return 0;
}


