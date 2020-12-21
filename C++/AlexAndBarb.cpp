#include <iostream>

using namespace std;

int main()
{
    long long k, m, n, c = 0;
    cin >> k >> m >> n;

    if (k % (m + n) < m)
        cout << "Barb";
    else
        cout << "Alex";

    /*
        Test case 1;
        k = 5, m = 2, n = 2
        5 % (2 + 2) = 1
        1 < 2 -> Barb

        Test case 2;
        k = 25, m = 3, n = 10
        25 % (3 + 10) = 12
        12 > 3 -> Alex
    */
}