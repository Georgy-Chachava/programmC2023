#include <iostream>
#include <cmath>

using namespace std;

bool funcTwo(int value) {
    while ((value%2)==0) {
        if ((value/=2)==1) {
            return true; 
        } 
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (funcTwo(n) == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
