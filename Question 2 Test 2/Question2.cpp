#include <iostream>
#include <string>
#include <vector>

int main()
{

    std::vector<std::string> vtrData;
    std::string strData = "";

    do
    {
        std::cout << "Please enter numbers: or (type stop to quit): ";
        std::cin >> strData;
        if (strData != "stop")
        {

            vtrData.push_back(strData);
        }

    } while (strData != "stop");

    for (int intIndex = 0; intIndex < vtrData.size(); intIndex++)

        std::cout << "Located at index: " << intIndex << " Variables at: " << vtrData.at(intIndex) << std::endl;

    return 0;
}