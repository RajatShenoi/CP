#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;

	for (int i = 0; i < 3; i++)
	{
		s[i] = tolower(s[i]);
	}

	if (s == "yes")
		cout << "YES" << endl;
	else
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