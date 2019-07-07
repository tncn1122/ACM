#include <bits/stdc++.h>
using namespace std;

#define  Infile				freopen("input.txt", "r", stdin)
#define  Outfile			freopen("output.txt", "w", stdout)
#define  ms(a, u)			memset(a, u, sizeof(a))
#define  pb(x)				push_back(x)
#define  endl				'\n'

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

db const EPS  = DBL_EPSILON;
ll const INF  = LLONG_MAX;


//declare here
ll n;
ll arr[25][25];
ll x[25];
ll ans = INF, total = 0;
//===========

bool check()
{
	ll res = 0;
	for (ll i = 1; i <= n; i++)
	{
		for (ll j = 1; j <= n; j++)
		{
			if (arr[i][j] == 1)
			{
				if (x[i] != 1 && x[n+j] != 1)
					res++;
			}
		}
	}
	return res == 0;
}

void Try(ll i)
{
	if (total <= n)
	{
		if (i > 2*n)
		{
			if (check())
			{
				ans = min(ans, total);
			}
		}
		else
		{
			for (ll j = 0; j <= 1; j++)
			{
				x[i] = j;
				total += j;
				Try(i+1);
				total -= j;
			}
		}
	}
}

void Result()
{
	//code here
	cin >> n;
	for (ll i = 1; i <= n; i++)
	{
		for (ll j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}
	}
	Try(1);
	cout << ans;
}
	

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#ifdef RIMURU
//		Infile;
//		Outfile;
	#endif
	Result();
	
	return 0;
}
