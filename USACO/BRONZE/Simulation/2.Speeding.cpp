#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int N, M;
    cin >> N >> M;

    vector<int> max_speed;
    vector<int> actual_speed;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < a; j++)
            max_speed.push_back(b);
    }

    int excess = 0;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < a; j++)
            actual_speed.push_back(b);
    }

    for (int i = 0; i < 100; i++)
    {
        if (actual_speed[i] > max_speed[i])
        {
            int e = actual_speed[i] - max_speed[i];
            if (e > excess)
                excess = e;
        }
    }

    cout << excess << endl;

    return 0;
}
