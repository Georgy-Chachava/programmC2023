#include <iostream>
#include <string>

int main() {
    std::string a1, a2;
    std::cin >> a1 >> a2;
    int p = a1.length();
    int q = a2.length();
    int** A = new int*[p+1];
    for (int i = 0; i <= p; i++) {
        A[i] = new int[q+1]{};
    }

    for (int j = 1; j <= q; j++) {
        for (int i = 1; i <= p; i++){
            if (a1[i-1] == a2[j-1]){
                A[i][j] = A[i-1][j-1] + 1;
            } else {
                A[i][j] = std::max(A[i-1][j], A[i][j-1]);
            }
        }
    }
    std::cout << A[p][q]*100/std::min(p, q) << std::endl;

    for (int i = 0; i <= p; i++) {
        delete [] A[i];
    }
    delete [] A;
    return 0;
}
