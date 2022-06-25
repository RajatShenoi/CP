#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N; cin >> N;

	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++)
	{
		int a; cin >> a;
		bool broken = false;
		for (auto &el : v)
		{
			if (el.first == a) {
				el.second++;
				broken = true;
				break;
			}
		}
		if (broken == false)
		{
			pair<int, int> p;
			p.first = a; p.second = 1;
			v.push_back(p);
		}
	}

	int max_count = 0;
	for (auto &el : v)
	{
		if (el.second > max_count) {
			max_count = el.second;
		}
	}

	cout << N - max_count << endl;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	while (T--)
		solve();

	return 0;
}