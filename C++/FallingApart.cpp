#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x, a = 0, b = 0;
    vector<int> v;
    cin >> n;
    while (n--)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), [](auto a, auto b) { return a > b; });

    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
            a += v[i];
        else
            b += v[i];
    }
    cout << a << ' ' << b << '\n';
}