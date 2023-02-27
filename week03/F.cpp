#include <iostream>
#include <cmath>
#include <typeinfo>
#include <algorithm>

using namespace std;

#ifndef N
#define N 5  // actual size of the array
#endif

int binsearch(int array[N]) {
    bool flag = false;
    int l = 0;
    int r = N-1;
    int m;
    while ((l<=r) && (flag != true)) {
        m = (l + r)/2;
        if (array[m] == 1) {
            flag = true;
        }
        if (array[m] > 1) {
            r = m-1;
        } else {
            l = m+1;
        }
    }
    return m-1;
}

int main() {
    int array[N] = {0};
    for (int i = 0; i<N; i++) {
        cin >> array[i];
    }
    cout << binsearch(array) << endl;
    return 0;
}
