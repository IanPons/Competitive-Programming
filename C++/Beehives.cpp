#include <iostream>
#include <utility>
#include <cmath>
#include <vector>

#define point pair<double, double>

using namespace std;

double distance(point q, point p)
{
    return sqrt(pow(q.first - p.first, 2) + pow(q.second - p.second, 2));
}

int main()
{
    double n, x, y;
    int h, sour, sweet;
    vector<point> hives;

    while (true)
    {
        cin >> n >> h;
        if (n == 0 && h == 0)
            break;

        sour = 0;
        sweet = 0;

        for (int i = 0; i < h; i++)
        {
            cin >> x >> y;
            hives.push_back({x, y});
        }

        for (int i = 0; i < hives.size(); i++)
        {
            for (int j = 0; j < hives.size(); j++)
            {
                if (j != i)
                {
                    if (distance(hives[i], hives[j]) <= n)
                    {
                        sour++;
                        break;
                    }
                }
            }
        }

        cout << sour << ' ' << "sour, " << h - sour << ' ' << "sweet\n";
        hives.clear();
    }
    return 0;
}