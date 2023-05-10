#include <iostream>

long long int jumper(int N) {
    long long int array[3] = {1, 1, 2};
    if (N <= 2) {
        return array[N];
    }
    for (int i = 3; i <= N; i++) {
        array[i % 3] = array[i % 3] + array[(i + 1) % 3] + array[(i + 2) % 3];
    }
    return array[N % 3];
}

int main() {
    int N;
    std::cin >> N;
    if ((N >= 1) and (N <= 60)) {
        std::cout << jumper(N) << std::endl;
    }
    return 0;
}
