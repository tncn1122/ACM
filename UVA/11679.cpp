#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll b, n;
//===========


void Result()
{
	//code here
	while(1)
	{
		cin >> b >> n;
		if (b == 0 && n == 0)
			break;
		ll r[105], d[105], c[105], v[105];
		for (ll i = 1; i <= b; i++)
			cin >> r[i];
		for (ll i = 1; i <= n; i++)
			cin >> d[i] >> c[i] >> v[i];
			
		for (ll i = 1; i <= n; i++)
		{
			r[c[i]] += v[i];
			r[d[i]] -= v[i];
		}
		bool f = true;
		for (ll i = 1; i <= b; i++)
		{
			if (r[i] < 0)
			{
				f = false;
				break;
			}
		}
		if(!f)
			cout << "N" << endl;
		else
			cout << "S" << endl;	
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	Infile;
//	Outfile;
	Result();
	
	return 0;
}

