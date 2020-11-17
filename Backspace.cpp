#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s, a = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        a += s[i];
        if (s[i] == '<')
        {
            a.pop_back();
            a.pop_back();
        }
    }
    cout << a << '\n';
}