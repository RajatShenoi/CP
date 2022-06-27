#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long n, m, a;
	cin >> n >> m >> a;

	unsigned long long v = ceil((double) n / a) * ceil((double) m / a);

	cout << v << endl;

	return 0;
}