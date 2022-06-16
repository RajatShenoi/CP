#include <bits/stdc++.h>

using namespace std;

const int inf = 10e9;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;

	low = inf;
	high = -inf;

	for (int i = 0; i < N; i++)
	{
		string type;
		cin >> type;

		int n, m;
		cin >> n >> m;

		if (type == "none")
		{
			low = max(low, n);
			high = min(high, m);
		}
		if (type == "off")
		{
			low += n;
			high += n;
		}
		if (type == "on")
		{
			low -= n;
			high -= m;

			low = max(0, low);
		}
	}
	
	return 0;
}