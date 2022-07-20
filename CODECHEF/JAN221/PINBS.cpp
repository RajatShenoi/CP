#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;

	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == '1') {
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	while (T--)
		solve();

	return 0;
}