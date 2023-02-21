#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;

#ifndef N
#define N 3  // actual size of the array
#endif

void print(int array[], int n) {
    for (int i = 0; i<n; i++) {
        cout << array[i] << " ";
    }
}

int main()
{
    int i=0;
    int m = N * 2;
    int j = 0;
    int A[N] = {0};
    int B[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> A[i];
    }
    for (i = 0; i<N; i++) {
        cin >> B[i];
    }
    int C[2*N] = {0};
    for (int p = 0; p < 2*N; p++) {
        if (p<N) {
            C[p] = A[p];
        } else {
            C[p] = B[p - N];
        }
    }
    for (int i = 0; i < 2*N-1; i++) {
        for (int j = 0; j < 2*N-1; j++) {
            if (C[j+1] < C[j]) {
                swap(C[j+1], C[j]);
            }
        }
    }
    print(C, 2*N);
    return 0;
}
