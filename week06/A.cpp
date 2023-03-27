#include <iostream>
#include <string>

struct Students {
    std::string name;
    int average_points;
};

int main() {
    int M = 0;
    int n = 0;
    Students data[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> data[i].name >> data[i].average_points;
    }
    std::cin >> M;
    std::string output[10];
    for (int j = 0; j < 10; j++) {
        if (data[j].average_points > M) {
            output[j] = data[j].name;
            n += 1;
        }
    }
    for (int j = 0; j < n; j++) {
        std::cout << output[j] << ' ' << std::endl;
    }
    return 0;

}
