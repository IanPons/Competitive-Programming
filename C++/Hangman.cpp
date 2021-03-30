#include <iostream>
#include <string>

using namespace std;

int in(char c, string s)
{
    int i = 0;
    for (char x : s)
    {
        if (x == c)
            i++;
    }
    if (i == 0)
        return -1;
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, p;
    cin >> a >> p;
    int r = a.size(), c = 0;

    for (char i : p)
    {
        int x = in(i, a);
        if (x != -1)
            r -= x;
        else
            c++;

        if (c == 10)
        {
            cout << "LOSE" << '\n';
            return 0;
        }
        if (r == 0)
        {
            cout << "WIN" << '\n';
            return 0;
        }
    }
}