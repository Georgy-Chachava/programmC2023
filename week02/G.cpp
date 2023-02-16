#include <iostream>
#include <cmath>

using namespace std;

unsigned reverse(unsigned n) {
    unsigned m = n%10;
    while (n/=10) {
        m = m*10 + n%10;
    }
    return m;
}
 
bool isPalindrom(const unsigned n) {
    return n == reverse(n);
}
 
int main() {
    int n=0;
    cin >> n;
    if (isPalindrom(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
