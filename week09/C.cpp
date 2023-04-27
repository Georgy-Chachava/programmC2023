#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    double* mass = new double[n];
    for (int i = 0; i < n; i++) {
        std::cin >> mass[i];
    }
    int M = 0, b = 0;
    std::cin >> M;
    for (int i = n; i > 0; i--) {
        while ((M - mass[i - 1] >= 0) and (M >= 0))
        {
            b++;
            M = M - mass[i - 1];
        }
    }
    b = b + M;
    std::cout << b << std::endl;
    delete[] mass;
    return 0;
}
