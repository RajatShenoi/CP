#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> a(N, 0);
	vector<int> b(M, 0);

	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < M; i++)
		cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i = 0, j = 0;

	int ans = 1010000000;

	while (i < N && j < M) {
		ans = min(ans, abs(a[i] - b[j]));
		if (a[i] <= b[j])
			i++;
		else
			j++;
	}

	cout << ans << endl;

	return 0;
}