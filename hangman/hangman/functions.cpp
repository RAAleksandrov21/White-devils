#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;

void welcome() //the function displays a big "Hangman" heading
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

void DrawHangman(int wrong) //the function draws the man being hanged
{
    if (wrong == 0)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";                       //this displays when you have no incorrect guesses
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (wrong == 1)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";                       //this displays when you have 1 incorrect guess
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (wrong == 2)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";                       //this displays when you have 2 incorrect guesses
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (wrong == 3)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";                       //this displays when you have 3 incorrect guesses
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (wrong == 4)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";                       //this displays when you have 4 incorrect guesses
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (wrong == 5)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";                      //this displays when you have 5 incorrect guesses
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (wrong == 6)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";                      //this displays when you have 6 incorrect guesses
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }

}


void Status(vector<char> incorrect, string answer)
{
    cout << "Incorrect Guesses: \n";

    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }

    cout << "\nYour word:\n";

    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[i] << " ";
    }
}


void End(string answer, string word) // the function displays a big "You Win" or "Game Over" text
{
    if (answer == word)
    {
        cout << "$$\\     $$\\                                       $$\\           " << endl;
        cout << "\\$$\\   $$  |                                      \\__|          " << endl;
        cout << " \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       $$\\  $$\\  $$\\ $$\\ $$$$$$$\\  " << endl;
        cout << "  \\$$$$  /$$  __$$\\ $$ |  $$ |      $$ | $$ | $$ |$$ |$$  __$$\\ " << endl;
        cout << "   \\$$  / $$ /  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |" << endl;
        cout << "    $$ |  $$ |  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |" << endl;
        cout << "    $$ |  \\$$$$$$  |\\$$$$$$  |      \\$$$$$\\$$$$  |$$ |$$ |  $$ |" << endl;
        cout << "    \\__|   \\______/  \\______/        \\_____\\____/ \\__|\\__|  \\__|" << endl;
    }
    else
    {
        cout << " $$$$$$\\                                           $$$$$$\\                                 " << endl;
        cout << "$$  __$$\\                                         $$  __$$\\                                " << endl;
        cout << "$$ /  \\__| $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\        $$ /  $$ |$$\\    $$\\  $$$$$$\\   $$$$$$\\  " << endl;
        cout << "$$ |$$$$\\  \\____$$\\ $$  _$$  _$$\\ $$  __$$\\       $$ |  $$ |\\$$\\  $$  |$$  __$$\\ $$  __$$\\ " << endl;
        cout << "$$ |\\_$$ | $$$$$$$ |$$ / $$ / $$ |$$$$$$$$ |      $$ |  $$ | \\$$\\$$  / $$$$$$$$ |$$ |  \\__|" << endl;
        cout << "$$ |  $$ |$$  __$$ |$$ | $$ | $$ |$$   ____|      $$ |  $$ |  \\$$$  /  $$   ____|$$ |      " << endl;
        cout << "\\$$$$$$  |\\$$$$$$$ |$$ | $$ | $$ |\\$$$$$$$\\        $$$$$$  |   \\$  /   \\$$$$$$$\\ $$ |      " << endl;
        cout << " \\______/  \\_______|\\__| \\__| \\__| \\_______|       \\______/     \\_/     \\_______|\\__|      " << endl;
    }
}