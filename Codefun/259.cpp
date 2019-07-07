#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(ll a, ll b)
{
	return a > b;
}

int main()
{
	ll n, m, arr[10005], ans = 0;
	cin >> n >> m;
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, cmp);
	for (ll i = 0; i < m; i++)
		if(arr[i] > 0)
		ans += arr[i];
	cout << ans;
	return 0;
}
