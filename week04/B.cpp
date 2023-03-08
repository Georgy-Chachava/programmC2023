#include <iostream>

#ifndef N
#define N 5
#endif

using namespace std;

int per(int (&mass)[N], int ind_left_base, int ind_right_base) {
    int p = mass[ind_right_base];
    int ind_turn1 = ind_left_base;

    for (int i = ind_left_base; i <= ind_right_base; i++) {
        if (mass[i] < p) {
            swap(mass[i], mass[ind_turn1]);
            ++ind_turn1;
        }
    }
    swap(mass[ind_turn1], mass[ind_right_base]);
    return ind_turn1;
}

void qsort(int (&mass)[N], int ind_left_base, int ind_right_base) {
    if (ind_left_base >= ind_right_base) { 
        
        return;
    
    }
    
    int p = per(mass, ind_left_base, ind_right_base);
    
    qsort(mass, ind_left_base, p - 1);
    qsort(mass, p + 1, ind_right_base);
}

int main() {
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    qsort(array, 0, N-1);
    
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
