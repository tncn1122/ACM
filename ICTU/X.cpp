#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n, t, arr[1000][1000], a, b;
//===========
ll Ax[] = {1, 1, 1, 0, 0, -1, -1, -1};
ll Ay[] = {1, 0, -1, 1, -1, 0, -1, 1};
bool check [1000][1000] = {0};


void Try(ll x, ll y, ll &res)
{
	if (x >= 0 && x < n && y >= 0 && y < n)
	{
		if (arr[x][y] == 0 && !check[x][y])
		{
			res++;
			check[x][y] = 1;
			for (ll i = 0; i < 8; i++)
			{
				Try(x+Ax[i], y+Ay[i], res);
			}
		}
	}
}

void Result()
{
	//code here
	cin >> n >> t;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	while(t--)
	{
		cin >> a >> b;
		ll ans = 0;
		Try(a-1, b-1, ans);
		cout << ans << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#ifdef RIMURU
		Infile;
	//	Outfile;
	#endif
	Result();
	
	return 0;
}

