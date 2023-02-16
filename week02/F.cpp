#include <iostream>

using std::cout;
using std::endl;

int recursive_factorial(int iterator) {
    if (iterator == 0) {
        return 1;
    }
    if (iterator > 0) {
        return recursive_factorial(iterator - 1)*iterator;
    }
    return 0;
}

int main() {
    int a;
    std::cin >> a;
    std::cout << recursive_factorial(a) << std::endl;
    return 0;

}
