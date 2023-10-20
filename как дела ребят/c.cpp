#include <iostream>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, c, res;
    cin >> n >> a >> b >> c;
    if (!(a <= b && a <= c && b <= n && c <= n)) goto invalidInput;

    res = n - b - c + a;
    if (res < 0) goto invalidInput;

    cout << res << '\n';
    return 0;

    invalidInput:
        cout << -1 << '\n';
        return 0;
}
