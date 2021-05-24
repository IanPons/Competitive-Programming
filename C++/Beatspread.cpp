#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, s, d; cin >> x;
	while(x--)
	{
		cin >> s >> d;
		int n = (s + d)/2;
		int m = s - n;

		if (n >= 0 and m >= 0 and n + m == s and abs(n - m) == d)
			cout << max(n, m) << ' ' << min(n, m) << '\n';
		else cout << "impossible" << '\n';
	}
	return 0;
}

