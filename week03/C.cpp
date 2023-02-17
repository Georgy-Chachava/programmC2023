#include <iostream>
#include <cmath>

#ifndef N
#define N 5  // actual size of the array
#endif

using namespace std;

void reverse(int a[], int p, int q) {
    while (p<q) {
        int tmp = a[p];
        a[p] = a[q];
        a[q] = tmp;
        p++;
        q--;
    }
}

void print(int array[], int n) {
    for (int i = 0; i<n; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int k=0, i = 0;
    cin >> k;
    int array[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> array[i];
    }
    reverse(array, 0, N-1);
    reverse(array, 0, k-1);
    reverse(array, k, N-1);
    print(array, N);
    return 0;
}
