#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N, X;
	cin >> N >> X;

	int a[N];

	bool broken = false;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			if (a[i] + a[i + 1] > X)
			{
				broken = true;
				break;
			}
			else
			{
				swap(a[i], a[i + 1]);
			}
		}
	}

	if (broken)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}

int main(int argc, char const *argv[])
{
	int T; cin >> T;

	while (T--)
		solve();

	return 0;
}
