#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m=1, i;
    cin >> n;
    for (i=1; i<n+1; i++) {
        m = m*i;
    }

    cout << m << endl;
}
