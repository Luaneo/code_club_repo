#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	if ((1 + n) * n < m) {
		cout << 0;
		return 0;
	}

	while (m > 0) {
		if (n < m) {
			cout << n << '\n';
		}
		else {
			cout << m << '\n';
		}
		m -= n;
	}

	return 0;
}