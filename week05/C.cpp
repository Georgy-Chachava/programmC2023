#include <iostream>

int main() {
    int mass[1000000]={1};
    int i = 0;
    std::cin >> mass[0];
    while (mass[i] != 0) { 
        ++i;
        std::cin >> mass[i];
    }
    for (int j = 0; j < i - 1; ++j) { 
        std::cout << mass[j] - mass[j+1] << std::endl;
    }
}
