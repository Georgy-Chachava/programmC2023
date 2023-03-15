#include <iostream>
#include <algorithm>

using namespace std;

#ifndef N
#define N 5  
#endif

void swap(unsigned array[], int i) {
    int p;
    p = array[i];
    array[i] = array[i-1];
    array[i-1] = p;
}

void print_array(unsigned array[], int n) {
    for (int i = 0; i<n; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

void backward_step(unsigned arr[], unsigned const begin_idx, unsigned const end_idx) {
    for (unsigned i = begin_idx; i > end_idx; i--) {
        if (arr[i-1] > arr[i]) {
            swap(arr, i);
        }
    }
}

int main() {
    int b = 0;
    cin >> b;
    int e = 0;
    cin >> e;
    unsigned array[N];
    for (int j = N; j > 0; j--) {
        array[N-j] = j-1;
    }
    print_array(array, N);
    backward_step(array, b, e);
    print_array(array, N);
    return 0;
}
