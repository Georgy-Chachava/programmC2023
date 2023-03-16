#include <iostream>
#include <algorithm>
#include <chrono>
#include <fstream>
#include <random>

using namespace std;

#ifndef N
#define N 5  
#endif

void print_array(unsigned array[], int n) {
    for (int i = 0; i<n; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

void backward_step(unsigned arr[], unsigned const begin_idx, unsigned const end_idx, unsigned const st) {
    for (unsigned i = begin_idx; i > end_idx; i -= st) {
        if (arr[i-st] > arr[i]) {
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

int main() {
    double t = 0;
    unsigned seed = 1001;
    int s = 100;
    for (int i = 100; i < 2100; i += 100) {
        unsigned array[i];
        for (int j = 0; j < i; j++) {
            array[j] = rand();
        }
        auto begin = std::chrono::steady_clock::now();
        for (int j = 0; j < s; j++){
            sort2(array, 0, i, i); 
        }
        auto end = std::chrono::steady_clock::now();
  
        auto t_s = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        t = t_s.count();

        std::cout << t/s << std::endl;
    }
    return 0;
}
