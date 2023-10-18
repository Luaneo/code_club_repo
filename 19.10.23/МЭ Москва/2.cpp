#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + c < b + d) {
        cout << a+1 << ' ' << c+1 << '\n';
    } else {
        cout << b+1 << ' ' << d+1 << '\n';
    }

    return 0;
}
