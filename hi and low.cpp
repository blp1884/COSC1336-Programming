//Brandon Phillips
//COSC-1336-016
//Homework: Hi <> Low
#include <iostream>
#include <ctime>


int main()
{
    int intNumber = 0;
    srand(time(0)); 
    intNumber = (rand() % 100);

    int intGuess;

    bool boolNumberofGuesses;
    boolNumberofGuesses = false;

    while (!boolNumberofGuesses)
    {
        std::cout << "Please guess a number between 1 and 100" << std::endl;
        std::cin >> intGuess;

        if (intGuess > intNumber)
        {
            std::cout << "Your " << intGuess << " is to high please try again" << std::endl;
        }
        
        else
        {
            std::cout << "Your " << intGuess << " is to low please try again" << std::endl;
        }

        if (intGuess == intNumber)
        {
            std::cout << "Congratulations you've guessed the correct number" << std::endl;
            boolNumberofGuesses = true;
        }
        
    } //while loop bracket
    return 0;
}