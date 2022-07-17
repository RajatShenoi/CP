#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
	int n; cin >> n;

	vector<ll> a(n);
	vector<vector<int>> ans(200);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int maxMask = 256;

	if (n <= 8)
		maxMask = (1 << n);

	for (int mask = 1; mask < maxMask; mask++) {
		ll sum = 0;
		vector<int> cur;

		for (int i = 0; i < min(n, 8); i++) {
			if (mask & (1 << i)) {
				sum += a[i];
				sum %= 200;
				cur.push_back(i);
			}
		}

		if (!ans[sum].empty()) {
			cout << "YES" << endl;
			cout << ans[sum].size() << " ";

			for (auto el:ans[sum])
				cout << el + 1 << " ";

			cout << endl;

			cout << cur.size() << " ";

			for (auto el:cur)
				cout << el + 1 << " ";

			cout << endl;

			return 0;
		}

		ans[sum] = cur;
	}

	cout << "NO" << endl;
 	
	return 0;
}