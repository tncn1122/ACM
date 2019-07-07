#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n;
vector <ll> ans;
//===========


void Result()
{
	//code here
	cin >> n;
	if (n == 0)
		cout << 0;
	else
	{
		while (n > 0)
		{
			if (n&1)
				ans.push_back(1);
			else
				ans.push_back(0);
			n >>= 1;
		}
		for (ll i = ans.size()-1; i >= 0; i--)
			cout << ans[i];
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

