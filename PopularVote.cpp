#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t, n, v;
    vector<pair<int, int>> votes;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            pair<int, int> p = {i, v};
            votes.push_back(p);
        }
        sort(votes.begin(), votes.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.second > b.second;
        });

        int sum = 0;
        for (int i = 0; i < votes.size(); i++)
        {
            sum += votes[i].second;
        }

        if (votes[0].second == votes[1].second)
            cout << "no winner" << '\n';

        else if (votes[0].second > sum / 2)
            cout << "majority winner " << votes[0].first << '\n';

        else
            cout << "minority winner " << votes[0].first << '\n';

        votes.clear();
    }

    return 0;
}