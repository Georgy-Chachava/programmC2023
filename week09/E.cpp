#include <iostream>

int Archive(int N, int k, double array[], int S) {
    int a = 0; 
    int b = 0;
    int c = 0;
    while(c < S - 1){
        if (array[c] - b > k) return -1;
        if (array[c] - b <= k && array[c + 1] - b > k){
            b += array[c] - b;
            a++;
        }
        c++;
    }
    
    if (array[S - 1] - b <= k){
        a++;
        b += array[S - 1];
    } else return -1;

    return a;
}

int main() {
    int k=0;
    int N=0;
    int S=0;
    std::cin >> N;
    std::cin >> k;
    std::cin >> S;
    double* energy = new double[S];
    for (int i = 0; i < S; i++){
        std::cin >> energy[i];
    }
    std::cout << Archive(N, k, energy, S) << std::endl;
    delete[] energy;
    return 0;
}
