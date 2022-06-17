#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);

	int N;
	cin >> N;

	vector<int> room(N);
	int total_cows = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> room[i];
		total_cows += room[i];
	}

	int ans = INT32_MAX;

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		for (int j = 0; j < N; j++)
		{
			temp += (j - i + N) % N * room[j];
		}
		ans = min(temp, ans);
	}

	cout << ans << endl;

	return 0;
}