#include <iostream>
#include <cmath>

using namespace std;

int recursive_power(int base, int power) {
    if (power == 0) {
        return 1;
    }
    if (power > 0) {
        return recursive_power(base, power-1)*base;
    }
    return 0;
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << recursive_power(a, n) << endl;
    return 0;
}
