#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool InArray(string s, vector<string> *v)
{
    for (auto word : *v)
    {
        if (word == s)
            return true;
    }
    return false;
}

int main()
{

    int t, n;
    vector<string> cities;
    cin >> t;
    while (t--)
    {
        cities.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (!InArray(s, &cities))
                cities.push_back(s);
        }
        cout << cities.size() << '\n';
    }

    return 0;
}