#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int N, W;
	cin >> N >> W;

	std::vector<pair<ll, ll>> a(N, make_pair(0, 0));

	for (int i = 0; i < N; i++)
		cin >> a[i].first >> a[i].second;

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	ll ans = 0;

	for (int i = 0; i < N; i++) {
		if (a[i].second <= W) {
			ans += a[i].first * a[i].second;
			W -= a[i].second;
		} else {
			ans += a[i].first * W;
			W = 0;
			break;
		}
	}

	cout << ans << endl;

	return 0;
}