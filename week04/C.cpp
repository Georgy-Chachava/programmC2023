#include <iostream>

#ifndef N
#define N 5
#endif

using namespace std;

void per(int (&array)[N], int ind, int l){
    if(2 * ind + 1 <= l & array[ind] < array[2 * ind + 1]) swap(array[ind], array[2 * ind + 1]);
    if(2 * ind + 2 <= l & array[ind] < array[2 * ind + 2]) swap(array[ind], array[2 * ind + 2]);
}

void cheops_sort(int (&array)[N], int ind_lst, int s){
    if(ind_lst == 0) return;
    for(int i = ind_lst; i >= 0; i--){
        per(array, i, ind_lst);
    }
    //cerr << ind_lst << " ";
    swap(array[0], array[ind_lst]);
    cheops_sort(array, ind_lst - 1, s);
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
