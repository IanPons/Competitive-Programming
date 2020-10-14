#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n == m)
    {
        cout << n + 1;
        return 0;
    }
    unsigned int x = abs(n - m) + 1;
    unsigned int start = min(n, m) + 1;

    for (int i = start; i < start + x; i++)
    {
        cout << i << '\n';
    }

    return 0;
}