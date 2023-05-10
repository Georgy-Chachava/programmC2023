#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    int array[10] = {30, 25, 22, 18, 17, 13, 10, 8, 5, 1};
    int mass[10] = {0};
    for (int i = 0; i < 10; i++) {
        while (a - 10 + i >= 0) {
            a = a - 10 +i;
            if (i == 0) {
                mass[9]++;
            } else if (i == 1) {
                mass[2]++;
                mass[5]++;
            } else if (i == 2) {
                mass[1]++;
                mass[5]++;
            } else if (i == 3) {
                mass[0]++;
                mass[5]++;
            } else if (i == 4) {
                mass[5]++;
            } else if (i == 5) {
                mass[1]++;
                mass[2]++;
            } else if (i == 6) {
                mass[1] = mass[1] + 2;
            } else if (i == 7) {
                mass[2]++;
            } else if (i == 8) {
                mass[1]++;
            } else if (i == 9) {
                mass[0]++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        while (mass[i] != 0) {
            mass[i]--;
            std::cout << i + 1 << ' ';
        }
    }
    return 0;
}
