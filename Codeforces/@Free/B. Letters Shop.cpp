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
ll n1, n2;
string s, t;
map <char, vector<ll> > ans;
//===========

void Result()
{
	//code here
	cin >> n1 >> s;
	for(ll i = 0; i < n1; i++)
	{
		ans[s[i]].push_back(i+1);
	}
	cin >> n2;
	for (ll i = 0; i < n2; i++)
	{
		cin >> t;
		ll res = -1;
		map <char, ll> mp;
		for (ll i = 0; i < t.length(); i++)
		{
			res = max(res, ans[t[i]][mp[t[i]]++]);
		}
		cout << res << endl;
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
