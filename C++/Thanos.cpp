#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    ll p, r, f, x;
    while (t--)
    {
        cin >> p >> r >> f;
        x = 0;
        while (p <= f)
        {
            p = round(p * r);
            x++;
        }
        cout << x << '\n';
    }
}