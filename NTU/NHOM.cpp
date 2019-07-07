#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll t, stt = 1;;
//===========


void Result()
{
	//code here
	cin >> t;
	while(t--)
	{
		ll n, k, a[105];
		cin >> n >> k;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		a[n] = LLONG_MIN;
		ll b, e = 0, ans = 0;
		for (b = 0; b < n; b++)
		{
			if (abs(a[b+1]-a[b]) > k)
			{
				ans++;
			}
		}
		cout << "Case #" << stt++ << ": " << ans << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

