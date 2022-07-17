#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N; cin >> N;

	long long a[N];

	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < (1 << N); i++)
	{
		int temp = 0;
		for (int j = 0; j < N; j++) {
			if (i & (1 << j))
				temp += a[j];
			else
				temp -= a[j];
		}
		if (temp % 360 == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	
	return 0;
}