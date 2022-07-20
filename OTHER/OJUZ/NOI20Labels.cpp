#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	int N; cin >> N;
 
	vector<ll> v(N - 1, 0);
 
	if (N == 2)
    {
        int d;
        cin >> d;
        if (d == 0)
        {
            cout << "-1" << endl;
            return 0;
        }
        if (d == 1)
        {
            cout << "1 2" << endl;
            return 0;
        }
        if (d == -1)
        {
            cout << "2 1" << endl;
            return 0;
        }
    }

    for (int i = 0; i < N - 1; i++)
		cin >> v[i];

    vector<ll> temp(N, 0);
    temp[0] = 1;

    for (int i = 1; i < N; i++) {
    	temp[i] = temp[i - 1] + v[i - 1];
    }

    sort(temp.begin(), temp.end());

    ll diff = temp[N - 1] - temp[0];

    if (diff != N - 1) {
    	cout << "-1" << endl;
    	return 0;
    }

    ll sum = 2 - temp[0];

    vector<ll> out(N, 0);

    for (int i = 0; i < N - 1; i++) {
    	out[i] = sum;
    	sum += v[i];
    }

    out[N - 1] = sum;

    for (auto el : out)
    	cout << el << " ";
    cout << endl;
 
	return 0;
}