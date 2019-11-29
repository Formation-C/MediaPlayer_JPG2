#include <iostream>
#include <algorithm>
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
        cout << input << endl;
    }
    return 0;
}


