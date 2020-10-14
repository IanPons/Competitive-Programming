#include <iostream>

#define ull unsigned long long

using namespace std;

int main()
{
    ull n, m;

    while (true)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;

        ull numerator, denominator = m, integer;

        integer = static_cast<int>(n / m);
        numerator = n % m;

        cout << integer << ' ' << numerator << ' ' << '/' << ' ' << denominator << '\n';
    }

    return 0;
}