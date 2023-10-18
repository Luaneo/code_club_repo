#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n <= 6) {
        cout << 1 << '\n';
    } else if ((n - 6) % 4 == 0) {
        cout << 1 + (n - 6) / 4 << '\n';
    } else {
        cout << 2 + (n - 6) / 4 << '\n';
    }
    
    return 0;
}