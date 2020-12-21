#include <iostream>

using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x < 0)
            c++;
    }
    cout << c;

    return 0;
}