#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int N; cin >> N;
	string s;
	cin >> s;
	for (int i = 0; i < N; i++)
	{
		if (s[i] == 'A')
			cout << 'T';
		else if (s[i] == 'T')
			cout << 'A';
		else if (s[i] == 'C')
			cout << 'G';
		else
			cout << 'C';
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	while (T--)
		solve();

	return 0;
}