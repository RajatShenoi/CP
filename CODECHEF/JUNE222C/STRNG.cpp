#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N; cin >> N;

	vector<int> v(N);
	vector<int> pre(N);
	vector<int> post(N);

	for (int i = 0; i < N; i++)
		cin >> v[i];

	pre[0] = v[0];
	for (int i = 1; i < N; i++)
	{
		pre[i] = gcd(pre[i - 1], v[i]);
	}

	post[N - 1] = v[N - 1];
	for (int i = N - 2; i >= 0; i--)
	{
		post[i] = gcd(post[i + 1], v[i]);
	}

	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			if (post[1] != 1)
				ans++;
		}
		else if (i == N - 1)
		{
			if (pre[N - 2] != 1)
				ans++;
		}
		else
		{
			if (__gcd(pre[i - 1], post[i + 1]) != 1)
				ans++;
		}
	}

	cout << ans << endl;
}

int main(int argc, char const *argv[])
{
	int T; cin >> T;

	while (T--)
		solve();

	return 0;
}