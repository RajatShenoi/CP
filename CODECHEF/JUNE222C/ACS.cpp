#include <bits/stdc++.h>

using namespace std;

void solve() {
	int P; cin >> P;

	int ans = 0;

	if (P > 1000) {
		cout << "-1" << endl;
		return; 
	}
	else {
		while (P >= 100)
		{
			ans++;
			P -= 100;
		}
		ans += P;
		if (ans <= 10)
			cout << ans << endl;
		else
			cout << "-1" << endl;
	}
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	while (T--)
		solve();

	return 0;
}