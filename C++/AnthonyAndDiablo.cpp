#include <iostream>

#define pi 3.14159265359

using namespace std;

int main()
{
    double a, n;
    cin >> a >> n;

    double r = n / (2.0f * pi);

    double x = pi * r * r;

    if (x >= a)
        cout << "Diablo is happy!" << '\n';
    else
        cout << "Need more materials!" << '\n';
}