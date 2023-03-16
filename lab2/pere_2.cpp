#include <iostream>
#include <algorithm>
#include <chrono>
#include <fstream>
#include <random>

using namespace std;

#ifndef N
#define N 5  
#endif

int n_swaps = 0;

void print_array(unsigned array[], int n) {
    for (int i = 0; i<n; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

void backward_step(unsigned arr[], unsigned const begin_idx, unsigned const end_idx, unsigned const st) {
    for (unsigned i = begin_idx; i > end_idx; i -= st) {
        if (arr[i-st] > arr[i]) {
            n_swaps++;
            int p;
            p = arr[i-st];
            arr[i-st] = arr[i];
            arr[i] = p;
        }
    }
}

void forward_step(unsigned arr[], unsigned const begin_idx, unsigned const end_idx, unsigned const st) {
    for (unsigned i = begin_idx; i < end_idx; i += st) {
        if (arr[i] > arr[i+st]) {
            n_swaps++;
            int p = arr[i+st];
            arr[i+st] = arr[i];
            arr[i] = p;
        }
    }
}

void sort1(unsigned arr[], unsigned const begin_idx, unsigned const end_idx, unsigned const st) {
    unsigned b = begin_idx;
    unsigned e = end_idx;
    while (b <= e) {
        forward_step(arr, b, e, st);
        e = e - st;
        backward_step(arr, e, b, st);
        b = b + st;
    }
}

void sort2(unsigned arr[], unsigned const begin_idx, unsigned const end_idx, unsigned k) {
    for (int i = 2; i > 0; i--) {
        sort1(arr, begin_idx, end_idx, i);
    }
}

int main(){
    double t = 0;
    unsigned seed = 1001;
    for(int i = 100; i<2100; i += 100){
        unsigned array[i];
        for(int j = 0; j < i; j++){
            array[j] = rand();
        }
        sort2(array, 0, i, i); 
        cout << n_swaps << endl;
        int number_of_swaps = 0;
    }
    return 0;
}
