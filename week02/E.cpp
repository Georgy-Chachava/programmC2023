#include <iostream>
#include <cmath>

using namespace std;

int fibonacci(int i) {
    if (i == 1) {
        return 0;
    }
    if (i == 2) {
        return 1;
    }
    if (i > 2) {
        return fibonacci(i-1)+fibonacci(i-2);
    }
    return 0;
}

int main() {
    int a;
    cin >> a;
    cout << fibonacci(a) << endl;
    return 0;
}
