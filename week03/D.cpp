#include <iostream>
#include <cmath>
#include <typeinfo>
#include <algorithm>

using namespace std;

#ifndef N
#define N 5  // actual size of the array
#endif

void print_array(int array[], int n) {
    for (int i = 0; i<n; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {
    int array0[N] = {0};
    for (int i = 0; i<N; i++) {
        cin >> array0[i];
    }
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1; j++) {
            if (array0[j+1] < array0[j]) {
                swap(array0[j+1], array0[j]);
            }
        }
    }
    print_array(array0, N);
    return 0;
}
