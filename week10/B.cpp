#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    int c = 0;
    int array[10] = {30, 25, 22, 18, 17, 13, 10, 8, 5, 1};
    for (int i = 0; i < 10; i++) {
        while (a - 10 + i >= 0) {
            c = c + array[i];
            a = a - 10 + i;
        }
    }
    std::cout << c << std::endl;
    return 0;
}
