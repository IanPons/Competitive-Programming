#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned int> correct_pieces = {1, 1, 2, 2, 2, 8};

    for (unsigned int i = 0; i < 6; i++)
    {
        int p, x;
        cin >> p;
        x = correct_pieces[i] - p;

        cout << x << ' ';
    }

    return 0;
}