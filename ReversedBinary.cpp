#include <iostream>
#include <string>
#include <bitset>

using namespace std;

unsigned long long reverseBits(unsigned long long n)
{
    unsigned long long rev = 0;
    while (n > 0)
    {
        rev <<= 1;

        if (n & 1 == 1)
            rev ^= 1;

        n >>= 1;
    }

    return rev;
}

int main()
{
    unsigned long long n;
    cin >> n;

    cout << reverseBits(n);

    return 0;
}