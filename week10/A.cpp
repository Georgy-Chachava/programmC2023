#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    long long int array[3] = {1, 1, 2};
    for (int i = 3; i <= a; i++) {
        array[i % 3] = array[(i - 1) % 3] + array[(i - 2) % 3];
    }
    std::cout << array[a % 3] * array[a % 3] << std::endl;
    return 0;
}
