#include <iostream>

using namespace std;

bool f(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return false;
    return a < b + c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b > c) {
        int temp = a;
        a = b;
        b = temp;
    } else if (a < c && c > b) {
        int temp = a;
        a = c;
        c = temp;
    }

    int i = 0;
    for (int jump = 1e5; jump > 0; jump /= 2) {
        while (f(a-i-jump, b-i-jump, c-i-jump))
            i += jump;
    }

    cout << i + 1 << '\n';
    return 0;
}
