#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N; cin >> N;

	std::vector<string> names;
	std::vector<int> scores;
	map<string, int> mp;

	for (int i = 0; i < N; i++) {
		string s; int score;
		cin >> s >> score;
		names.push_back(s);
		scores.push_back(score);
		mp[s] += score;
	}

	int max_score = 0;

	for (int i = 0; i < N; i++)
		max_score = max(mp[names[i]], max_score);

	map<string, int> mp2;
    
    string ans;
    for (int i = 0; i < N; i++)
    {
        mp2[names[i]] += scores[i];
        if (mp2[names[i]] >= max_score && mp[names[i]] == max_score)
        {
            ans = names[i];
            break;
        }
    }

    cout << ans << endl;

	return 0;
}