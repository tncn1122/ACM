#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, num, ans;
	cin >> n;
	ll center = n / 2 + 1;
	for(ll i = 1; i <= n; i++)
		for(ll j = 1; j <= n; j++)
		{
			cin >> num;
			if (num == 1)
			{
				 ans = abs(i - center) + abs(j - center);
			}
		}
	cout << ans;
	return 0;
}
