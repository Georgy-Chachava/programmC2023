#include <iostream>
#include <cmath>
#include <typeinfo>
#include <algorithm>

using namespace std;

void print_array(int array[3][2], int m, int n) {
    for (int i = 0; i<n; ++i) {
        for (int j = 0; j<m; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void sort2d(int arr[3][2], int k = 0, int n = 0) {
    for (int a = 0; a<k*n; a++) {
        for (int b = 0; b<k; b++) {
            for (int c = 0; c<n-1; c++) {
                if (arr[b][c]>arr[b][c+1]) {
                    int tmp = arr[b][c];
                    arr[b][c] = arr[b][c+1];
                    arr[b][c+1] = tmp;
                }
            }
        }
        for (int p = 0; p<n; p++) {
            for (int q = 0; q<k-1; q++) {
                if (arr[q][p]>arr[q][p+1]) {
                    int temp = arr[q][p];
                    arr[q][p] = arr[q][p+1];
                    arr[q][p+1] = temp;
                }
            }
        }
    }
}

int main() {
    int k = 3, n = 2;
    int array[3][2];
    for (int i = 0; i<k; i++) {
        for (int j=0; j<n; j++) {
            cin >> array[i][j];
        }
    }
    sort2d(array, k, n);
    print_array(array, k, n);
    return 0;
}
