#include <curses.h>
#include <iostream>
using namespace std;
int main()
{
    int ch;

    initscr(); // initialize the screen
    nodelay(stdscr, TRUE); // make getch() non-blocking
    int i = 0;
    while (1)
    {
        i++;
        ch = getch(); // get a character from input queue
        if (ch == ERR) {
            // no key was pressed
            printw("No key pressed\n");
            printw("i = %d\n", i);
        } else {
            // a key was pressed
            printw("Key pressed: %c\n", ch);
            if (ch == 'q') {
                break; // exit loop if 'q' is pressed
            }
            ungetch(ch); // return the character to input queue
        }
        refresh(); // update screen
    }

    endwin(); // end curses mode

    return 0;
}