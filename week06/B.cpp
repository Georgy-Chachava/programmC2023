#include <iostream>
#include <string>

struct Students {
    std::string name;
    int average_points;
};

int main() {
    int M = 0;
    int N = 0;
    std::cin >> N;
    Students data[N];
    for (int i = 0; i < 10; i++) {
        std::cin >> data[i].name >> data[i].average_points;
    }
    std::cin >> M;
    for (int i = 0; i < N; i++) {
        if (data[i].average_points > M) {
            output[n] = data[i].name;
            p[i] = data[i].average_points;
            n += 1;
        }
    }
    return 0;

}
