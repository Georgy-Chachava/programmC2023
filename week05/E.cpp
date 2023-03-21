#include <iostream>

using std::cout;
using std::endl;
using std::cin;

bool reserve_memory(int* dst, size_t N) {
    if (dst == nullptr) {
        dst = new int[N];
        return true;
    } else {
        return false;
    }
}

void free_memory(int* ptr) {
    delete [] ptr;
}

int main() {
    int N = 0;
    int* ptr = nullptr;
    cin >> N;
    cout << reserve_memory(ptr, N) << endl;
    free_memory(ptr);
    return 0;
}
