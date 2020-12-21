#include <iostream>
#include <iomanip>

using namespace std;

double factorial(int n)
{
    double fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int n;
    double res = 0.0f;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        res += 1 / factorial(i);
    }

    cout << setprecision(20) << res << '\n';

    return 0;
}