#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;
int main()
{
    welcome();

    string arrrandom[34] = { "plane", "bicycle", "defence", "football", "basketball", "regard", "mayor", "earthwax", "trade,", "dealer", "practical", "infinite", "opposition", "cover", "archive", "reputation", "disclose", "cycle", "forward", "dialogue", "brainstorm", "battle", "term", "precision", "harbor", "safari", "trainer", "tight", "nonsense",
"seem", "pigeon", "witty", "roof", "recursion" };

    srand(time(NULL));
    int randomword = rand() % 34;
    string word = arrrandom[randomword];
    string answer;
    int len = word.length();
    answer = FindAnswer(len);


    int wrong = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;


    while (answer != word && wrong < 7)
    {
        DrawHangman(wrong);
        Status(incorrect, answer);

        cout << "\n\nEnter your guess here: ";
        cin >> letter;

        for (int i = 0; i < word.length(); i++)
        {
            if (letter == word[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            cout << "\nCorrect!\n";
        }
        else
        {
            cout << "\nIncorrect!\n";
            incorrect.push_back(letter);
            wrong++;
        }
        guess = false;
        system("cls");

    }

    End(answer, word);
    return 0;
}