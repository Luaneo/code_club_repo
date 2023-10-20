#include <iostream>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll min = 1e5;
    ll sum = 0;

    ll k;
    cin >> k;
    while (k--) {
        ll n;
        cin >> n;
        sum += n;
        if (n < min) min = n;
    }

    cout << sum - min + 1 << '\n';
    return 0;
}
