#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long N; cin >> N;

	vector<long long> bal(N, 0);

	long long sum = 0;

	for (long long i = 0; i < N; i++) {
		cin >> bal[i];
		sum += bal[i];
	}

	sort(bal.begin(), bal.end());
	reverse(bal.begin(), bal.end());

	vector<long long> pref(N, 0);

	pref[0] = bal[0];

	for (long long i = 1; i < N; i++) {
		pref[i] = pref[i - 1] + bal[i];
	}

	double diff = 0;
	double A, B;
	double final_A;
	double final_B;
	for (long long i = 0; i < N; i++) {
		A = (double) (i + 1) / N * 100;
		B = (double) pref[i] / sum * 100;

		if (B - A > diff) {
			final_A = A;
			final_B = B;
		}

		diff = B - A;
	}

	cout << final_A << endl;
	cout << final_B << endl;

	return 0;
}