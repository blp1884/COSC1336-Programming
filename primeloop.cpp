//Brandon Phillips
//COSC-1336-016
//Homework: Primes
#include <iostream>

int main() {

    //Testing Number
    int intNumber = 12;
    //Variable for Prime
    bool boolIsPrime =true;

    for (int intNumber = 1; intNumber <= 10000; intNumber++) {
        //Reset prime before testing for prime
        boolIsPrime = true;
    //Calculation for Prime
    if(intNumber == 0 || intNumber == 1){
       boolIsPrime = false;
    } else {
        for(int intCounter =2; intCounter <= intNumber /2; intCounter++) {
            if(intNumber % intCounter == 0) {
                boolIsPrime = false;
                break; //intCounter = intNumbr; also stop loop
            }
        }
    }
    

    //std::cout << intNumber << " is a " << (boolIsPrime ? "": " not ") << "prime number."  << std::endl; commented out so that only shows the prime numbers
    if(boolIsPrime) {
        std::cout << intNumber << ", ";
    }
    }//for loop for prime
    return 0;
} 