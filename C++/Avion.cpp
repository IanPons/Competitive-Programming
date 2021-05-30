#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a;
	string s;

	for (int i = 1; i <= 5; i++)
	{
		cin >> s;
		for (int j=0; j < s.size()-2; j++)
		{
			if (s[j] == 'F')
				if (s[j+1] == 'B')
					if (s[j+2] == 'I')
						a.push_back(i);
		}
	}

	if (a.size())
		for (auto x : a)
			cout << x << " ";
	else
		cout << "HE GOT AWAY!";

	return 0;
}