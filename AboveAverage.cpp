#include <iostream>
#include <vector>

using namespace std;
#define ull unsigned long long

int main()
{
    int t;
    cin >> t;
    vector<int> classGrades;
    while (t--)
    {
        classGrades.clear();
        int n, average = 0, above_average = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int grade;
            cin >> grade;
            classGrades.push_back(grade);
            average += grade;
        }
        average /= n;
        for (int i = 0; i < n; i++)
        {
            if (classGrades.at(i) > average)
                above_average++;
        }

        double percent = (double)above_average / n * 100;
        printf("%0.3f%\n", percent);
    }

    return 0;
}