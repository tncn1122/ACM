#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	char arr[105][105];
	string s[105];
	ll n, m; cin >> n >> m;
	map <char,ll> mp;
	for (ll i = 1; i <= n; i++)
		cin >> s[i];
	for (ll i = 0; i <= n+1; i++)
	{
		for (ll j = 0; j <= m+1; j++)
		{
			if (i >= 1 && i <= n && j >= 1 && j <= m)
			arr[i][j] = s[i][j-1];
			else
			arr[i][j] = '0';
		}
	}
	for (ll i = 1; i <= n; i++)
	{
		for (ll j = 1; j <= m; j++)
		{
			if (arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j-1] && arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i-1][j])
				mp[arr[i][j]]++;
		}
	}
	
//	for (ll i = 0; i <= n+1; i++)
//	{
//		for (ll j = 0; j <= m+1; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
	
	for (ll i = 'a'; i <= 'z'; i++)
	{
		if (mp[i] > 0)
			cout <<(char) i << " " << mp[i] << endl;
	}
	return 0;
}
