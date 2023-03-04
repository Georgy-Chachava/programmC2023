#include <iostream>

#ifndef N
#define N 10
#endif

using namespace std;

int perm(int (&mass)[N], int ind_left_base, int ind_right_base){
    int pivot = mass[ind_right_base];
    int ind_turn = ind_left_base;

    for(int i = ind_left_base; i <= ind_right_base; i++){
        if(mass[i] < pivot){
            swap(mass[i], mass[ind_turn]);
            ++ind_turn;
        }
    }
    swap(mass[ind_turn], mass[ind_right_base]);
    return ind_turn;
}

void qsort(int (&mass)[N], int ind_left_base, int ind_right_base){
    if(ind_left_base >= ind_right_base){ 
        
        return;
    
    }
    
    int pivot = perm(mass, ind_left_base, ind_right_base);
    
    qsort(mass, ind_left_base, pivot - 1);
    qsort(mass, pivot + 1, ind_right_base);
}

int main(){
    int array[N];
    for(int i = 0; i < N; i++){
        cin >> array[i];
    }
    qsort(array, 0, N-1);
    
    for(int i = 0; i < N; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
