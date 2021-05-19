#include <iostream>

using namespace std;

int main()
{
	char o;
	long long int n, x, y, prev=1, r;
	cin >> n;
	while(n--)
	{
		cin >> x >> o >> y;
		if (o == '+')
		{
			r = (x + y) - prev;
		}
		else if (o == '-')
		{
			r = prev * (x - y);
		}
		else if (o == '*')
		{
			r = (x*y) * (x*y);
		}
		else if (o == '/')
		{
			if (x % 2 == 0)
				r = x/2;
			else r = (x+1)/2;
		}
		cout << r << '\n';
		prev = r;
	}
	

	return 0;
}
