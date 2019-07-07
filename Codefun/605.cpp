#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, x, num, ans = 0;
	cin >> n >> x;
	for (ll i = 0; i < n; i++)
	{
		cin >> num;
		if (num >= x)
		ans++;
	}
	cout << ans;
	return 0;
}
