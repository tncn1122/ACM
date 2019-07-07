#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1000][1000];
ll amount(ll a[1000][1000],ll k, ll x, ll y)
{
	ll sum = 0;
	for(ll i = y; i < k+y; i++)
		for(ll j = x; j < k+x; j++)
		sum += a[i][j];
	return sum;
}
int main()
{
	ll n, m, k, max = 0;
	cin >> n >> m >> k;
	for(ll i = 0; i <= n + k; i++)
		for(ll j = 0; j < m + k; j++)
		if (i >= 0 && i < n && j >= 0 && j < m)
		cin >> arr[i][j];
		else
		arr[i][j] = 0;	
	
	for(ll i = 0; i <= n - k; i++)
	{ 
		for(ll j = 0; j <= m - k; j++)
		{
		//	cout << amount(arr,k,j,i) << " ";
			if (max < amount(arr,k,j,i))
				max = amount(arr,k,j,i);
		}
		//cout << endl;
	}
	cout << max;
	return 0;
}
