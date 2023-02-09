#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int f, g, s, r;
    if (b*b-4*a*c>0) {
        f = (-b-sqrt(b*b-4*a*c))/(2*a);
        g = (-b+sqrt(b*b-4*a*c))/(2*a);
        cout << "Answer = " << f << ' ' << g << endl;
    }
    if (b*b-4*a*c == 0) {
        s = (-b-sqrt(b*b-4*a*c))/(2*a);
        cout << "Answer = " << s << endl;
    }
    if (b*b-4*a*c<0) {
        cout << '\n' << endl;
    }
    if (a == 0) {
        u = -c/b
        cout << u << endl
    }
    return 0;
}
