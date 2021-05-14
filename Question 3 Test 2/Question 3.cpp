#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> vtrVariables {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Variables" << std::endl;
    for(int x : vtrVariables) {
        std::cout << x << " ";
        std::cout << std::endl;
    }
    int max = *max_element(vtrVariables.begin(), vtrVariables.end());
    
    std::cout << max << " is the largest variable: " << std::endl;

    return 0;
}