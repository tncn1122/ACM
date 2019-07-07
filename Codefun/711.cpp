#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, m, arr[30005];
	cin >> n >> m;
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	for(ll i = 0; i < m; i++)
	{
		ll x, y, sum = 0;
		cin >> x >> y;
		for (ll j = x - 1; j < y; j++)
			sum+= arr[j];
		cout << sum << endl;
	}
	return 0;
}
