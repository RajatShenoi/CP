#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;

	int count = 0;

	for (int i = (n - 1) / 2; i >= 0; i--) {
		if (s[i] == s[(n - 1) / 2]) {
			count++;
		} else {
			break;
		}
	}

	cout << 2 * count - (n & 1) << endl;
}

int main(int argc, char const *argv[])
{
	int T; cin >> T;

	while (T--)
		solve();

	return 0;
}