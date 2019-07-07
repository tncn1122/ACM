#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100005];
int main()
{
	ll n; cin >> n;
	for ( ll i = 1; i <= n; i++)
		cin >> arr[i];
	for (ll i = 1; i <= n/2; i++)
	{
		if (arr[i] != arr[n + 1 - i])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
