//Brandon Phillips
//COSC-1336-016
//Homework:PhoneBook
#include <iostream>
#include <vector>
#include "address.h"
#include <string>
#include <iostream>

Address::Address()
{
    init();
}

Address::~Address()
{
    setFirst(" ");
    setLast(" ");
    setPhoneNumber(" ");
}

void Address::print()
{
    std::cout << toString();
}

std::string Address::toString()
{
    std::string strAddress = getFirst() + " " + getLast() + " " + getPhoneNumber();
    return strAddress;
}
void Address::init()
{
    setFirst("");
    setLast("");
    setPhoneNumber("(000) 000 0000");
}
void Address::setFirst(std::string strpFirst)
{
    if (strpFirst.size() < 1)
    {
        strpFirst = "No Name";
    }
    strFirst = strpFirst;
}
void Address::setLast(std::string strpLast)
{
    strLast = strpLast;
}
void Address::setPhoneNumber(std::string strpPhoneNumber)
{
    strPhoneNumber = strpPhoneNumber;
}
std::string Address::getFirst()
{
    return strFirst;
}
std::string Address::getLast()
{
    return strLast;
}
std::string Address::getPhoneNumber()
{
    return strPhoneNumber;
}

int main()
{
    std::vector<Address> vtrAddress(2);
    Address objAddress = Address();
    Address objAddress2 = Address();

    vtrAddress.clear();

    std::cout << objAddress.toString();

    objAddress.setFirst("John");
    objAddress.setLast("P");
    objAddress.setPhoneNumber("123");

    vtrAddress.push_back(objAddress);

    objAddress2.setFirst("Jane");
    objAddress2.setLast("P");
    objAddress2.setPhoneNumber("456");
    //objAddress2.print();
    vtrAddress.push_back(objAddress2);

    for (int intIndex = 0; intIndex < vtrAddress.size(); intIndex++)
    {
        std::cout << std::endl << intIndex << ": ";
        vtrAddress.at(intIndex).print();
    }

    return 0;
}
