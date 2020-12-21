#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14159265359
int main()
{
    double r;
    cin >> r;
    cout << setprecision(20) << pi * r * r << '\n';
    cout << setprecision(20) << (r * r / 2.0f) * 4.0f;
}
