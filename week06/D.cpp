#include <iostream>
#include <string>

struct Streets {
    int b_x;
    int b_y;
    int e_x;
    int e_y;
} s1, s2;

void swap(int l, int r) {
    int tmp = l;
    l = r;
    r = tmp;
}

int main() {
    int a = 0;
    std::cin >> s1.b_x >> s1.b_y >> s1.e_x >> s1.e_y >> s2.b_x >> s2.b_y >> s2.e_x >> s2.e_y;
    if (s1.b_x > s1.e_x) {
        swap(s1.b_x, s1.e_x);
    }
    if (s1.b_y > s1.e_y) {
        swap(s1.b_y, s1.e_y);
    }
    if (s2.b_x > s2.e_x) {
        swap(s2.b_x, s2.e_x);
    }
    if (s2.b_y > s2.e_y) {
        swap(s2.b_y, s2.e_y);
    }
    if (s1.b_x < s2.e_x and s1.e_x > s2.b_x and s1.b_y < s2.e_y and s1.e_y > s2.b_y) {
        a = -1;
    } else {
        a = 1;
    }
    if (a == -1) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }
    return 0;
}
