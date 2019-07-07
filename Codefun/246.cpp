#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, ans = 0;
	cin >> n;
	for(ll x = 0; x <= 1000; x++)
	{
		for(ll y = 0; y <= 500 - 1*x; y++)
		{
			for(ll z = 0; z <= 200 - 1*x - 2*y; z++)
			{
				if (n - (1*x + 2*y + 5*z) == 0)
					ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
