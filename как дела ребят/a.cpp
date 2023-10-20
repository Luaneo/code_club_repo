#include <iostream>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll h, m, a, b;
    cin >> h >> m >> a >> b;

    if (a > 840 && b > 840) {
        cout << -1 << '\n';
        return 0;
    }

    ll t = h * 60 + m - 8*60;
    if (t < 0) {
        cout << -t << '\n';
        return 0;
    }
    if (t - t%a + a > 14*60 && t - t%b + b > 14*60) {
        cout << 24*60 - t << '\n';
        return 0;
    }
    if (t % a == 0 || t % b == 0) {
        cout << 0 << '\n';
        return 0;
    }

    ll res_a = a - t % a;
    ll res_b = b - t % b;
    cout << (res_a < res_b ? res_a : res_b) << '\n';
    return 0;
}
