#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 100;
int swapOrder[MAX_N];
int cowID[MAX_N];
int find(int n, int x) {
	for (int i = 0; i < n; i++) {
		if (swapOrder[i] == x)
			return i;
	}
	return 0;
}

int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> swapOrder[i];
	for (int i = 0; i < n; i++) 
		cin >> cowID[i];
	for (int i = 0; i < 3; i++) {
		int temp[MAX_N];
		for (int j = 1; j <= n; j++) {
			int e = find(n, j);
			temp[e] = cowID[j - 1];
		}
		for (int j = 0; j < n; j++) 
			cowID[j] = temp[j]; 
	}

	for (int i = 0; i < n; i++) 
		cout << cowID[i] << '\n'; 
}
	