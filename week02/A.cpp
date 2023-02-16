#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a%400 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
