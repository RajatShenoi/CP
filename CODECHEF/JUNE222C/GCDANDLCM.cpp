#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

void solve() {
	ll n; cin >> n;
	ll ans = 0;

	for (ll a = 1; a * a <= n; a++) {
		for (ll lcm = a; lcm * lcm <= n; lcm += a) {
			ll lsq = lcm * lcm;
			ll asq = a * a;
			ll num = (n - lsq - asq) * lsq;

			if (num <= 0)
				continue;
			ll den = asq + lsq;
			if (num % den != 0)
				continue;
			ll bsq = num / den;
			ll b = (ll) sqrt(bsq);

			if (b * b != bsq)
				continue;

			ll gsq = gcd(a, b) * gcd(a, b);

			if (asq + bsq + gsq + lsq == n)
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