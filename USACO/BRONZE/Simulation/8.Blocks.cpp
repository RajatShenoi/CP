#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);

	int N;
	cin >> N;

	const int number_of_letters = 26;

	vector<int> count(number_of_letters, 0);

	for (int i = 0; i < N; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		vector<int> temp1(number_of_letters, 0);
		vector<int> temp2(number_of_letters, 0);

		for (int j = 0; j < s1.length(); j++)
			temp1[(int)s1[j] - 97] += 1;

		for (int j = 0; j < s2.length(); j++)
			temp2[(int)s2[j] - 97] += 1;

		for (int j = 0; j < number_of_letters; j++)
			count[j] += max(temp1[j], temp2[j]);
	}

	for (int i = 0; i < number_of_letters; i++)
		cout << count[i] << endl;

	return 0;
}