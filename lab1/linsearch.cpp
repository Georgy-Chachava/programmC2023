#include <iostream>
#include <chrono>
#include <fstream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

void search(int* array, int k, int a){
    for (int i = 0; i < a; i++){
        if (k == array[i]){
            return;
        }
    }
}

int main(){
    long long time1 = 0;
    unsigned seed = 1001;
    int s_count = 500;
    for (int m = 100; m<1010000; m += 50000){
        time1 = 0;
        int* array = new int[m];
        for (int i = 0; i < m; i ++){
            array[i] = i;
        } 

        std::default_random_engine rng(seed);
        std::uniform_int_distribution<unsigned> dstr(0, m);

        for(int i = 0; i < s_count; i++){
            auto begin = std::chrono::steady_clock::now();
            search(array, dstr(rng), m); 
            auto end = std::chrono::steady_clock::now();
  
            auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            time1 += time_span.count();
            }

        std::cout << time1/s_count << std::endl;
        delete [] array;
    }

    return 0;
}
