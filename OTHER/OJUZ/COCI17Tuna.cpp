#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N; cin >> N;
	int X; cin >> X;

	int cost = 0;

	for (int i = 0; i < N; i++) {
		int P1, P2; cin >> P1 >> P2;

		if (abs(P1 - P2) > X) {
			int P3; cin >> P3;
			cost += P3;
		} else {
			cost += max(P1, P2);
		}
	}

	cout << cost << endl;

	return 0;
}