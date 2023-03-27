#include <iostream>
#include <string>

struct Students {
    std::string name;
    int average_points;
};

void swap(int l, int r) {
    int tmp = l;
    l = r;
    r = tmp;
}

void swap_str(string &l, string &r) {
    string tmp = l;
    l = r;
    r = tmp;
}

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
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (p[j] >= p[j + 1]) {
                if (p[j] == p[j + 1]) {
                    if ((output[j]).compare(output[j + 1]) > 0) {
                        swap_str(output[j], output[j + 1]);
                    }
                } else {
                    swap(p[j], p[j + 1]);
                    swap_str(output[j], output[j + 1]);
                }
            }
        }
    }
    for (int k = 0; k < n; k++) {
        std::cout << output[k] << ' ' << std::endl;
    }
    return 0;
}
