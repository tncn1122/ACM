#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, m;
	string s;
	cin >> n >> m >> s;
	for (ll i = 0; i < n; i++)
	{
		ll times = m;
		while(s[i] == 'H')
		{
			times--;
			if (times == 0)
			{
				cout << "R.I.P";
				return 0;
			}
			i++;
		}
	}
	cout << "YOLO!";
	return 0;
}
