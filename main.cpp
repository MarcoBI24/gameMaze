#include <iostream>
#include <string>
#include <vector>
#include <ncurses.h>

using namespace std;

void DrawMap(int ejeX, int ejeY)
{
    vector mapGame = {"#############################",
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
    for (int y = 0; y < mapGame.size(); y++)
    {
        for (int x = 0; x < 29; x++)
        {
            if (x == ejeX && y == ejeY)
            {
                printw("<");
            }
            else
            {
                printw("%c", mapGame[y][x]);
            }
        }
        printw("\n");
    };
};
int main()
{
    // init screen and sets up screen
    initscr();

    // print to screen

    // refreshes the screen

    // pause the screen output

    // deallocates memory and ends ncurses

    string play = "on";
    int x = 0;
    int y = 18;

    while (play == "on")
    {
        DrawMap(x, y);
        // cin >> play;
        // cout << "eje X : ";
        // cin >> ejeX;
        // cout << "eje Y : ";
        // cin >> ejeY;
        // podria implementar el algoritmo de prueba1.cpp y eliminar el while
        int key = getch();
        clear();
        printw("Key pressed: %c", key);
        
        switch (key)
        {
        case 'a':
            x -= 1;
            break;
        case 'd':
            x  += 1;
            break;
        case 'w':
            y  -= 1;

            break;
        case 's':
            y  += 1;

            break;
        default:
            y += 1;
            break;
        }

        // system("clear");
        // refresh();
    }
    endwin();

}
