#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
bool check[100005] = {0};
ll n, s = 0;
bool ans[100005] = {0};
//===========

void Try(ll num)
{
	if (!check[num])
	{
		check[num] = true;
		for (ll i = 1; i <= sqrt(num); i++)
		{
			if (num%i == 0)
			{
				ll x = min(i, num/i);
				ll y = num/x;
				if (!ans[(x-1)*(y+1)])
				{
					ans[(x-1)*(y+1)] = 1;
					s++;
				}
				Try((x-1)*(y+1));
			}
		}
	}
}

void Result()
{
	//code here
	cin >> n;
	Try(n);
	cout << s << endl;
	for (ll i = 0; i <= n; i++)
	{
		if (ans[i])
			cout << i << " ";
	}
	
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

