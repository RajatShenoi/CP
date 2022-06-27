#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
	ll N, M;
	cin >> N >> M;

	if (N == M) {
		ll add = 1;
		for (ll i = 0; i < N; i++)
		{
			for (ll j = 1; j <= M; j++)
			{
				cout << j * add << " ";
			}
			cout << endl;
			add += 2;
		}
	}

	if (N < M) {
		ll add = N;
		for (ll i = 0; i < N; i++)
		{
			ll start = i * (N + M) + 1;
			for (ll j = 0; j < M; j++)
			{
				cout << start + add * j << " ";
			}
			cout << endl;
			add--;
		}
	}

	if (N > M) {
		ll add = 2 * min(M, N) + abs(M - N);
		ll start = 1;
		for (ll i = 0; i < N; i++)
		{
			for (ll j = 0; j < M; j++)
			{
				cout << start + add * j << " ";
			}
			cout << endl;
			start += min(M, N);
			add--;
		}
	}
}

int main(int argc, char const *argv[])
{
	int T; cin >> T;

	while (T--)
		solve();

	return 0;
}