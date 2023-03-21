#include <iostream>

void print(size_t s, short* arr) {
    for (size_t i = 0; i < s; i++) {
        std::cout << *(arr + i) << ' ';
    }
    std::cout << std::endl;
}

int main() {
    short* array;
    size_t s = 10;
    array = new short[10];
    for (size_t i = 0; i < s; i++) {
        array[i] = i;
        std::cout << array + i << ' ';
    }
    print(s, array);
    for (size_t i = 0; i < s; i += 2) {
        *(array + i) *= *(array + i);
    }
    print(s, array);
    return 0;
}
