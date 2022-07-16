#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N; cin >> N;

	vector<int> code(N, 0);

	for (int i = 0; i < N; i++)
		cin >> code[i];

	for (int i = 0; i < N; i++)
	{
		int count; cin >> count;
		string moves; cin >> moves;
		cin.ignore();

		for (int j = count - 1; j >= 0; j--) {
			if (moves[j] == 'D') {
				if (code[i] == 9) {
					code[i] = 0;
					continue;
				}
				code[i]++;
			}
			else if (moves[j] == 'U') {
				if (code[i] == 0) {
					code[i] = 9;
					continue;
				}
				code[i]--;
			}
		}
	}

	for (int i = 0; i < N; i++)
		cout << code[i] << " ";

	cout << endl;
}

int main(int argc, char const *argv[])
{
	int T; cin >> T;

	while (T--)
		solve();

	return 0;
}