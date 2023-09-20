#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> dino;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		dino.push_back({ x, y, i+1 });
	}

	sort(dino.begin(), dino.end());

	for (int i = 0; i < n - 1; i++) {
		cout << dino[i][2] << ' ' << dino[i + 1][2] << '\n';
	}

	return 0;
}
