#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N, R;
	cin >> N >> R;

	vector<int> a(N, 0);
	vector<int> b(N, 0);
	vector<pair<int, int>> effective;

	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < N; i++)
		cin >> b[i];

	for (int i = 0; i < N; i++) {
		pair<int, int> p;
		p.first = a[i] - b[i];
		p.second = a[i];
		effective.push_back(p);
	}

	sort(effective.begin(), effective.end());

	int count = 0;

	for (int i = 0; i < N; i++) {
		if (effective[i].second > R) {
			continue;
		}
		int c = (R - (effective[i].second - effective[i].first)) / effective[i].first;
		count += c;
		R -= effective[i].first * c;
	}

	cout << count << endl;
}

int main(int argc, char const *argv[])
{
	int T; cin >> T;

	while (T--)
		solve();

	return 0;
}