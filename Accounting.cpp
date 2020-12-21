#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    long n, q, x, i, restart[2] = {0, -1};
    string token;
    cin >> n >> q;

    vector<long> v(n + 1), r(n + 1);

    fill(v.begin(), v.end(), 0);
    fill(r.begin(), r.end(), 0);

    for (int k = 1; k <= q; k++)
    {
        cin >> token;
        if (token == "PRINT")
        {
            cin >> i;
            if (restart[1] > r[i])
                cout << restart[0] << '\n';
            else
                cout << v[i] << '\n';
        }
        else if (token == "SET")
        {
            cin >> i >> x;
            auto p = &v[i];
            auto _r = &r[i];
            *p = x;
            *_r = k;
        }

        else if (token == "RESTART")
        {
            cin >> x;
            restart[0] = x;
            restart[1] = k;
        }
    }
}
