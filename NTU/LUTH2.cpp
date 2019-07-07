#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

inline ll diMod(ll A, ll B, ll Base);
inline ll fpow(ll a, ll x, ll Base);

//declare here
ll t, a, b, k;
//===========

ll eulerPhi(ll n) 
{ 
    if (n == 0) 
		return 0;
    ll ans = n;
    for (ll x = 2; x*x <= n; ++x) 
	{
        if (n % x == 0) 
		{
            ans -= ans / x;
            while (n % x == 0) 
				n /= x;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}


void Result()
{
	//code here
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> k;
		if (b >= 0)
		{
			cout << fpow(a, b, k) << endl;
		}
		else
		{
			ll m = eulerPhi(k)-1;
			ll tmpa = fpow(a, m, k);
			cout << fpow(tmpa, -b, k) << endl;	
		}
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


inline ll fpow(ll a, ll x, ll Base){if(x==0)return 1;if(x&1){return a*fpow(a, x-1, Base)%Base;} else{ll t=fpow(a, x/2, Base);return t*t%Base;}}
inline ll diMod(ll A, ll B, ll Base){ll result = (A * fpow(B, Base-2, Base)) % Base; return result;}

