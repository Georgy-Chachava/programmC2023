#include <iostream>

#ifndef N
#define N 10
#endif

using namespace std;

void perm(int (&mass)[N], int ind, int lft_brd){
    if(2 * ind + 1 <= lft_brd & mass[ind] < mass[2 * ind + 1]) swap(mass[ind], mass[2 * ind + 1]);
    if(2 * ind + 2 <= lft_brd & mass[ind] < mass[2 * ind + 2]) swap(mass[ind], mass[2 * ind + 2]);
}

void cheops_sort(int (&mass)[N], int ind_lst, int size){
    if(ind_lst == 0) return;
    for(int i = ind_lst; i >= 0; i--){
        perm(mass, i, ind_lst);
    }
    //cerr << ind_lst << " ";
    swap(mass[0], mass[ind_lst]);
    cheops_sort(mass, ind_lst - 1, size);
}

int main(){
    int array[N];
    for(int i = 0; i < N; i++){
        cin >> array[i];
    }
    
    cheops_sort(array, N - 1, N);
    
    for(int i = 0; i < N; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
