#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

	int N, K;
	cin >> N >> K;

	vector<int> diams;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		diams.push_back(temp);
	}

	sort(diams.begin(), diams.end());

	vector<int> counts(N, 0);

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++)
		{
			if (abs(diams[i] - diams[j]) <= K)
			{
				counts[i]++;
			}
		}
	}

	cout << *max_element(counts.begin(), counts.end()) << endl;
	
	return 0;
}