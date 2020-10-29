#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int c = 3, x;
    vector<int> v;
    string s;

    while (c--)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> s;
    sort(v.begin(), v.end());

    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'A':
            cout << v[0] << ' ';
            break;

        case 'B':
            cout << v[1] << ' ';
            break;
        case 'C':
            cout << v[2] << ' ';

        default:
            break;
        }
    }
    return 0;
}
