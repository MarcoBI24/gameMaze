#include <iostream>
#include <string>
#include <vector>
using namespace std;

void DrawMap(vector<const char*> mapGame){
        for(int i = 0; i < mapGame.size(); i++){
            cout << mapGame[i] << endl;
        };

    };
int main()
{
    vector mapGame = { "#############################",
                       "#               #           #",
                       "#               #           #",
                       "#               #           #",
                       "#   #####   #   #####   #   #",
                       "#   #       #   #       #   #",
                       "#   #       #   #       #   #",
                       "#   #       #   #       #   #",
                       "#   #   #####   #   #####   #",
                       "#   #   #       #       #   #",
                       "#   #   #       #       #   #",
                       "#   #   #       #       #   #",
                       "#   #   #   #########   #   #",
                       "#####   #   #           #    ",
                       "#       #   #           #    ",
                       "#       #   #           #    ",
                       "#       #   #   #############",
                       "    #####   #               #",
                       "    #   #   #               #",
                       "    #   #   #               #",
                       "#####   #   #   #########   #",
                       "#       #   #   #       #   #",
                       "#       #   #   #       #   #",
                       "#       #   #   #       #   #",
                       "#   #####   #####   #   #   #",
                       "#                   #       #",
                       "#                   #       #",
                       "#                   #       #",
                       "#############################"};

    DrawMap(mapGame);
    string name = "";
    string* apunt = &name;
    cout << "Hello world from CODEBLOCK!!" << endl;
    cout << "What is your name : ";
    cin >> name;
    cout << "\x1B[2J\x1B[H";
    cout << "Hi " << name ;
    cout << apunt;
    cout << *apunt;
    *apunt = "Berna";
    cout << "Now your name is " << name;

    return 11;
}
