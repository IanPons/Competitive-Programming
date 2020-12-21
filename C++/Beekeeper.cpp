#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isVowel(char c, char v[6])
{
    for (int i = 0; i < 6; i++)
    {
        if (c == v[i])
            return true;
    }
    return false;
}

int pairs(string &s, char v[6])
{
    int c = 0;
    for (int j = 0; j < s.length() - 1; j++)
    {
        if (isVowel(s[j], v) && s[j] == s[j + 1])
            c++;
    }
    return c;
}

int main()
{
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    int n;
    string s, ans;
    while (cin >> n && n != 0)
    {
        int best = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            int p = pairs(s, vowels);
            if (p > best)
            {
                best = p;
                ans = s;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}