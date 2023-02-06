#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int p = n*m;
    while (n!=m) {
        if (n>m) {
            n = n-m;
        } else {
            m = m-n;
        }
    }
    cout << p/n << endl;
    return 0;
}
