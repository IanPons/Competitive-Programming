#include <iostream>

#define ull unsigned long long

using namespace std;
int main()
{
    int t, n;
    ull sum, candies;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> candies;
            sum += candies;
            if (sum > n)
                sum %= n;
        }

        printf(sum == 0 || sum == n ? "YES\n" : "NO\n");
    }
}