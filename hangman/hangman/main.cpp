#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;
int main()
{
    welcome();

    string arrrandom[34] = { "plane", "bicycle", "defence", "football", "basketball", "regard", "mayor", "earthwax", "trade,", "dealer", "practical", "infinite", "opposition", "cover", "archive", "reputation", "disclose", "cycle", "forward", "dialogue", "brainstorm", "battle", "term", "precision", "harbor", "safari", "trainer", "tight", "nonsense",
"seem", "pigeon", "witty", "roof", "recursion" };

    int wrong; //wrong guesses
    bool guess;
    char letter;
    char option; //play again option


    do {
        srand(time(NULL));
        int randomword = rand() % 34;
        string word = arrrandom[randomword];
        string answer;
        int len = word.length();
        answer = FindAnswer(len);

        wrong = 0;
        vector<char> incorrect;
        guess = false;
        
        while (answer != word && wrong < 7) //a loop that continues untill you guess the word or make too many wrong attempts
        {
            DrawHangman(wrong); //drawing the hangman
            Status(incorrect, answer); //shows your incorrect guesses and your word

            cout << "\n\nEnter your guess here: ";
            cin >> letter;

            for (int i = 0; i < word.length(); i++) //checks if the letter you guessed is in the word
            {
                if (letter == word[i])
                {
                    answer[i] = letter;
                    guess = true;
                }
            }
            if (guess)  //checks if your guess is correct or not
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
            system("cls"); //the old drawing disappears
        }

        End(answer, word);
        cout << "Do you want to play again? (Y/N)";
        cin >> option;
        system("cls");  //the "You win" or "Game Over" disappeares

    } while (option == 'y' || option == 'Y');

    return 0;
}