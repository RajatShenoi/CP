#include <iostream>
#include <algorithm>  
#include <cstdio>
using namespace std;
int event[1001]; // declaring the array globally to initialize all the elements to 0
int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout); 
	int maxtime = 1000;
	int n; cin >> n;
		
		
	for (int i = 0; i < n; i++) { // iterating through every cow
		int start; cin >> start; 
		int end; cin >> end;
		int amt; cin >> amt;
		// at time start, cow i needs to be milked, so 
		// we'll need amt additional buckets (hence adding amt)
		event[start] += amt;
		// at time end, cow i is done milking, so we can free up 
		// amt buckets (hence subtracting amt)
		event[end] -= amt; 
	}
		
	// res represents the maximum number of buckets we'll need 
	// to use at any given time and cur represents 
	// how many buckets we need to use at the current 
	// time we're processing
	int res = 0, cur = 0;
	for (int i = 0; i <= maxtime; i++) {
		// at time i, the number of buckets in use changes by event[i]
		// so we want to update the number of buckets 
		// we are currently using accordingly
		cur += event[i];
		// we want res to be the greatest number of buckets 
		// we need to use at any given point in time
		res = max(res, cur); 
		
	}
	
	
	cout << res << '\n'; 
	
}