#include <iostream>
#include <cmath>

int main() {
    int n = 1;
    int s = -1;
    while (n!=0){
        std::cin >> n;
        if (n%2==0) {
            s+=1;
        }
    }
    std::cout << s << std::endl;
    return 0;
}
