#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	
	int M, N, K;
	cin >> M >> N >> K;

	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		cin.ignore();
		for (int a = 0; a < K; a++){
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < K; k++)
					cout << s[j];
			}
			cout << endl; 
		}
	}

	return 0;
}