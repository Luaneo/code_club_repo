#include <iostream>
#include <cstdlib>
#include <utility>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (min(m, n) % 2 == 1) {
        cout << 1 + abs(n - m);
    }
    else {
        cout << 2 * (abs(n - m) + 2);
    }

    return 0;
}
