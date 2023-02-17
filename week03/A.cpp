#include <iostream>
#include <cmath>

#ifndef N
#define N 3  // actual size of the array
#endif

using namespace std;

void reverse(int a[], size_t n) {
    for (size_t i = 0; i<n/2; i++) {
        int tmp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = tmp;
    }
}

void print(int array[], int n) {
    for (int i = 0; i<n; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int n = N, i=0;
    int array[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> array[i];
    }
    reverse(array, N);
    print(array, N);
    return 0;
}
