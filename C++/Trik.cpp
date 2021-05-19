#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n[3] = {1, 0 , 0};
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			int x = n[0];
			n[0] = n[1];
			n[1] = x;
		}
		else if (s[i] == 'B')
		{
			int x = n[2];
			n[2] = n[1];
			n[1] = x;
		}
		else if (s[i] == 'C')
		{
			int x = n[0];
			n[0] = n[2];
			n[2] = x;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (n[i] == 1)
			cout << i + 1 << '\n';
	}

	return 0;
}