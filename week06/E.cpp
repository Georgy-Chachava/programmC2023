#include <iostream>
#include <string>

struct Segment {
    int begin;
    int end;
};

void swap(int l, int r) {
    int tmp = l;
    l = r;
    r = tmp;
}

int main() {
    int a = 0, b = 0, N = 0;
    Segment data[N];
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> data[i].begin >> data[i].end;
        if (data[i].begin > data[i].end) {
            swap(data[i].begin, data[i].end);
        }
    }
    for (int k = 0; k < N; k++) {
        if (data[k].begin > data[k+1].end and data[k+1].begin > data[k].end) {
            a -= 1;
        } else {
            b += 1;
        }
    } 
    if (a < 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;

}
