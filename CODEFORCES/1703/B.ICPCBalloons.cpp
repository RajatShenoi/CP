#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N; cin >> N;
	vector<bool> a(26, false);

	int count = 0;

	string s; cin >> s;

	for (int i = 0; i < s.length(); i++) {
		char prob = s[i];
		if (a[(int)prob - 65] == false) {
			count++;
			a[(int)prob - 65] = true;
		}
		count++;
	}

	cout << count << endl;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	while (T--)
		solve();

	return 0;
}