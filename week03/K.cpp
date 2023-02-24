#include <iostream>
#include <cmath>
#include <typeinfo>
#include <algorithm>

using namespace std;

#ifndef N
#define N 3  // actual size of the array
#endif

int trace(int array[N][N]) {
    int sum=0;
    for (int i = 0; i<N; i++) {
        for (int j = 0; j<N; j++) {
            if (i == j) {
                sum += array[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int array[N][N];
    for (int i = 0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> array[i][j];
        }
    }
    cout << trace(array) << endl;
    return 0;
}
