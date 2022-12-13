#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;


void welcome()
{
    cout << "$$\\   $$\\                                                                 " << endl;
    cout << "$$ |  $$ |                                                                " << endl;
    cout << "$$ |  $$ | $$$$$$\\  $$$$$$$\\   $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\  $$$$$$$\\  " << endl;
    cout << "$$$$$$$$ | \\____$$\\ $$  __$$\\ $$  __$$\\ $$  _$$  _$$\\  \\____$$\\ $$  __$$\\ " << endl;
    cout << "$$  __$$ | $$$$$$$ |$$ |  $$ |$$ /  $$ |$$ / $$ / $$ | $$$$$$$ |$$ |  $$ |" << endl;
    cout << "$$ |  $$ |$$  __$$ |$$ |  $$ |$$ |  $$ |$$ | $$ | $$ |$$  __$$ |$$ |  $$ |" << endl;
    cout << "$$ |  $$ |\\$$$$$$$ |$$ |  $$ |\\$$$$$$$ |$$ | $$ | $$ |\\$$$$$$$ |$$ |  $$ |" << endl;
    cout << "\\__|  \\__| \\_______|\\__|  \\__| \\____$$ |\\__| \\__| \\__| \\_______|\\__|  \\__|" << endl;
    cout << "                              $$\\   $$ |                                  " << endl;
    cout << "                              \\$$$$$$  |                                  " << endl;
    cout << "                               \\______/                                   " << endl;
    cout << "How to play: Save the man from being hanged by guessing the letters in the word.\n";
}


string FindAnswer(int len)
{
    switch (len)
    {
    case 1:
        return "_";
        break;
    case 2:
        return "__";
        break;
    case 3:
        return "___";
        break;
    case 4:
        return "____";
        break;
    case 5:
        return "_____";
        break;
    case 6:
        return "______";
        break;
    case 7:
        return "_______";
        break;
    case 8:
        return "________";
        break;
    case 9:
        return "_________";
        break;
    case 10:
        return "__________";
        break;
    case 11:
        return "___________";
        break;
    case 12:
        return "____________";
        break;
    case 13:
        return "_____________";
        break;
    case 14:
        return "______________";
        break;
    case 15:
        return "_______________";
        break;
    }
}
