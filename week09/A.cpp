#include <iostream>

using std::cout;
using std::endl;

int main() {
    int arr[6] = {1, 7, 28, 49, 63, 98};
    int M = 0;
    std::cin >> M;
    int a = 0;
    for (int i = 5; i > -1; i--) {
        while ((M - arr[i] > 0) and (M != 0)) {
            a++;
            M = M - arr[i];
        }
    }
    a = a + M;
    cout << a << endl;
    return 0;
}
