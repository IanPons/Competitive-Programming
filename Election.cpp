#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sorttuple(tuple<string, string, int> &a, tuple<string, string, int> &b)
{
    return (get<2>(a) > get<2>(b));
}

int main()
{
    string line;
    getline(cin, line);
    int n;
    n = stoi(line);
    vector<tuple<string, string, int>> election;
    string candidate, party;

    while (n--)
    {
        getline(cin, candidate);
        getline(cin, party);
        election.push_back({candidate, party, 0});
    }
    getline(cin, line);
    int m = stoi(line);
    while (m--)
    {
        string vote;
        getline(cin, vote);

        for (auto &t : election)
        {
            if (get<0>(t) == vote)
            {
                get<2>(t) = get<2>(t) + 1;
                break;
            }
        }
    }
    sort(election.begin(), election.end(), sorttuple);

    // cout << get<2>(election[0]) << ' ' << get<2>(election[1]) << '\n';

    if (get<2>(election[0]) == get<2>(election[1]))
    {
        cout << "tie" << '\n';
    }
    else
    {
        cout << get<1>(election[0]) << '\n';
    }
}