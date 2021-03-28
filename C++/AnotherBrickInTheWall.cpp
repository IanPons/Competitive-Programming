#include <iostream>

#define ul unsigned long

using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;

    int layers = 0, sum = 0, x;

    while (n--)
    {
        cin >> x;
        sum += x;
        if (sum == w)
        {
            sum = 0;
            layers++;
        }
        else if (sum > w)
            break;

        if (layers == n)
        {
            cout << "YES" << '\n';
            return 0;
        }
    }

    cout << "NO" << '\n';

    return 0;
}