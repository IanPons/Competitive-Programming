#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c, char v[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (v[i] == c)
            return true;
    }
    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    string s, x = "";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (!isVowel(s[i], vowels))
        {
            x += s[i];
        }
        else
        {
            x += s[i];
            i += 2;
        }
    }

    cout << x << '\n';

    return 0;
}