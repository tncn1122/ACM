#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll a[105][105] = {0}, f[105][105] = {0};
ll m, n;
//===========


void Result()
{
	//code here
	cin >> m >> n;
	for (ll i = 0; i < m; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (ll i = 1; i < m; i++)
	{
		a[i][0] += a[i-1][0];
	}
	for (ll i = 1; i < n; i++)
	{
		a[0][i] += a[0][i-1];
	}
	
	for (ll i = 1; i < m; i++)
	{
		for (ll j = 1; j < n; j++)
		{
			a[i][j] += max(a[i-1][j], a[i][j-1]);
		}
	}
	cout << a[m-1][n-1];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

