#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n, x, a, ans;
//===========


void Result()
{
	//code here
	cin >> n;
	for (ll i = 1; i <= n; i++)
	{
		cin >> x;
		ans = -1;
		while (x--)
		{
			cin >> a;
			ans = max(ans, a);
		}
		cout << "Case " << i << ": " << ans << endl;
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

