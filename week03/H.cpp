#include <iostream>
#include <cmath>
#include <typeinfo>
#include <algorithm>

using namespace std;

void print_array(int array[3][3], int m, int n) {
    for (int i = 0; i<m; ++i) {
        for (int j = 0; j<n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int k=3, n=3;
    int array[3][3];
    for (int i = 0; i<k; i++) {
        for (int j=0; j<n; j++) {
            cin >> array[i][j];
        }
    }
    int mass[3][3];
    for (int i = 0; i<k; i++) {
        for (int j=0; j<n; j++) {
            mass[i][j] = array[j][i];
        }
    }
    print_array(mass, k, n);
    return 0;
}
