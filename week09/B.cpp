#include <iostream>

void Voronin(int m, int n) {
    int m1 = 0;
    int n1 = 1;
    int t = 2;
    while (n *m1 != m *n1) {
        if (n *(t *m1 + n1) <= m *t *n1) {
            m1 = t *m1 + n1;
            n1 *= t;
            std::cout << t << ' ';
        }
        t++;
    }
    std::cout << std::endl;
}

int main() {
    int m=0;
    int n=0;
    std::cin >> m;
    std::cin >> n;
    Voronin(m, n);
    return 0;
}
