#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool AllUniform(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[0])
            return false;
    }
    return true;
}

int main()
{
    bool even = true;
    string s;
    vector<int> v;
    int c = 0, t = 0;

    while (cin >> s)
    {
        t++;
        if (s == "END")
            break;

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != '*')
                c++;
            else
            {
                v.push_back(c);
                c = 0;
            }
        }

        if (AllUniform(v))
            cout << t << ' ' << "EVEN" << '\n';

        else
            cout << t << ' ' << "NOT EVEN" << '\n';

        v.clear();
    }
}