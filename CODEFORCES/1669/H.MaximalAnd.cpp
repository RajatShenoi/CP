#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N, K;
	cin >> N >> K;

	vector<int> number_of_bits_to_be_changed(31, 0), v(N);

	for (int i = 0; i < N; i++)  {
		cin >> v[i];
		for (int j = 30; j >= 0; j--) {
			if (v[i] & (1 << j)) 
				number_of_bits_to_be_changed[j]++;
		}
	}

	int ans = 0;
	for (int i = 30; i >= 0; i--) {
		int temp = N - number_of_bits_to_be_changed[i];
		if (temp <= K) {
			K -= temp;
			ans += (1 << i);
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