#include <iostream>
#include <chrono>
#include <fstream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

void randomize(int* ptr, size_t N, int seed) {
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned> dstr(0, N);
    for (int i = 0; i < N; i++) {
        ptr[i] = rand();
    }
}

void create_outfile(int* ptr, size_t N, int step) {
    std::ofstream out("data.txt", std::ios::out);
    for (int i = 0; i < N; ++i) {
        if (out.is_open()) {
            out << step * (i + 1) << " " << ptr[i] << endl;
        }
    }
    out.close();
}

void search(int* array, int k, int a){
    for (int i = 0; i < a; i++){
        if (k == array[i]){
            return;
        }
    }
}

int main(){
    long long t1 = 0;
    unsigned seed = 1001;
    int s_count = 500;
    for (int m = 100; m<1010000; m += 50000){
        t1 = 0;
        int* array = new int[m];
        std::default_random_engine rng(seed);
        std::uniform_int_distribution<unsigned> dstr(0, m);
        randomize(array, m, seed);
        for(int i = 0; i < s_count; i++){
            auto begin = std::chrono::steady_clock::now();
            search(array, dstr(rng), m); 
            auto end = std::chrono::steady_clock::now();
            auto time_s = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            t1 += time_s.count();
            }

        std::cout << t1/s_count << std::endl;
        delete [] array;
    }

    return 0;
}
