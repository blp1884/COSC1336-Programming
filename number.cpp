//Brandon Phillips
//COSC-1336
//Numbers Howework to give smallest, largest, sum, difference, product and ratio from two values
#include <iostream>

int main() {

//variables
int intNumberOne = 0;
int intNumberTwo = 0;
int intSum = 0;
int intRatio = 0;
int intLarger = 0;
int intSmaller = 0;


//Ask queston, needs input from user
std::cout << "Please enter a number: ";
std::cin >> intNumberOne;
std::cout << "Please enter a number: ";
std::cin >> intNumberTwo;

if(intNumberOne < intNumberTwo) {
    intRatio = intNumberTwo / intNumberOne;    
    intLarger = intNumberTwo;
    intSmaller = intNumberOne;
}//if
else {
    intRatio = intNumberOne / intNumberTwo;
    intLarger = intNumberOne;
    intSmaller = intNumberTwo;
}//else

//tells smallest and largest numbers
std::cout << "The smallest is: " << intSmaller << std::endl;
std::cout << "The largest is: " << intLarger << std::endl;

//adds variables
intSum = intNumberOne + intNumberTwo;
std::cout << "The sum is: " << intNumberOne << " + " << intNumberTwo << " = " << intSum << std::endl;

//subtracts variables
intSum = intNumberOne - intNumberTwo;
std::cout << "The difference is: " << intNumberOne << " - " << intNumberTwo << " = " << intSum << std::endl;

//multiples variables
intSum = intNumberOne * intNumberTwo;
std::cout << "The prodcut is: " << intNumberOne << " * " << intNumberTwo << " = " << intSum << std::endl;

//gives ratio
std::cout << "The ratio is: " << intRatio << std::endl;


    return 0;
}