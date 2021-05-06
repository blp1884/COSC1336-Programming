#include <iostream>
//adding my comment for learning github
const int INTCOLUMNS = 6;
const int INTROWS = 12;

void clearSeats(char arypSeats[][INTCOLUMNS])
{
    for (int intIndexRows = 0; intIndexRows < INTROWS; intIndexRows++)
    {
        for (int intIndexColumns = 0; intIndexColumns < INTCOLUMNS; intIndexColumns++)
        {
            //std::cout << "[" << arypSeats[intIndexRows][intIndexColumns] << "]";
            arypSeats[intIndexRows][intIndexColumns] =  ' ';
        }
    }
}

void print(char arypSeats[][INTCOLUMNS])
{
    for (int intIndexRows = 0; intIndexRows < INTROWS; intIndexRows++)
    {
        for (int intIndexColumns = 0; intIndexColumns < INTCOLUMNS; intIndexColumns++)
        {
            std::cout << "[" << arypSeats[intIndexRows][intIndexColumns] << "] ";
        }
        std::cout << std::endl;
    }
}

void inputSeatSelection(char arypSeats[][INTCOLUMNS])
{
    int intRowChoice = 0;
    int intColumnChoice = 0;
    do
    {
        std::cout << "Please enter your row number choice (1 to " << INTROWS << "); ";
        std::cin >> intRowChoice;

    } while (intRowChoice < 1 || intRowChoice > INTROWS);

    do
    {
        std::cout << "Please enter your row number choice (1 to " << INTCOLUMNS << "); ";
        std::cin >> intColumnChoice;

    } while (intColumnChoice < 1 || intColumnChoice > INTCOLUMNS);
        
    //while (arypSeats[intRowChoice - 1][intColumnChoice - 1] = 'x')
        
}

bool inputAnotherSeat()
{
    char charAnotherSeat = ' ';
    std::cout << "would you like to enter another seat? y/n:";
    std::cin >> charAnotherSeat;

    switch (charAnotherSeat)
    {

    case 'y':
    case 'Y':
        return true;
        break;

    default:
        return false;
        break;
    }
}

int main()
{
    char arySeats[INTROWS][INTCOLUMNS];

    clearSeats(arySeats);
    do
    {
        print(arySeats);
        inputSeatSelection(arySeats);
        print(arySeats);
    } while (inputAnotherSeat());
    print(arySeats);

    //print(arySeats);
    //inputSeatSelection(arySeats);
    //print(arySeats);

    return 0;
}