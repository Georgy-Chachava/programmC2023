#include <iostream>
#include <chrono>
#include <fstream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

void find_two(int* array, int s, int a){
    int l = 0;
    int r = l - 1;
    while (l < r){
        if (array[l] + array[r] == s){
            return;
        }
        if (array[l] + array[r] < s){
            l++;
        } else {
            r--;
        }
    }
} 

int main(){
    double time1 = 0;
    unsigned seed = 1001;
    int s_count = 1000;
    for (int m = 100; m<10100; m += 500){
        int* array = new int[m];
        for (int i = 0; i < m; i ++){
            array[i] = i;
        } 

        std::default_random_engine rng(seed);
        std::uniform_int_distribution<unsigned> dstr(0, 3*m);

        auto begin = std::chrono::steady_clock::now();
        for (int j = 0; j < s_count; j++){
            find_two(array, dstr(rng), m); 
        }
        auto end = std::chrono::steady_clock::now();
  
        auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        time1 = time_span.count();

        std::cout << time1/s_count << std::endl;
        delete [] array;
    }

    return 0;
}