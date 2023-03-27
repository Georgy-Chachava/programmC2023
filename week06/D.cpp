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
