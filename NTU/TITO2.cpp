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
ll const Base = 1000000007;
inline ll diMod(ll A, ll B);
inline ll fpow(ll a, ll x);

//declare here
db a, b;
ll la, lb;

//===========


ll sumP(ll n)
{
	ll A = (((n*(n+1))%Base)*((2*n+1)%Base))%Base;
	ll B = 6;
	return diMod(A, B);
}

ll sub(ll A, ll B)
{
	if (A >= B)
	{
		return (A-B)%Base;
	}
	else
	{
		return ((A-B)%Base + Base);
	}
}

void Result()
{
	//code here
	cin >> a >> b;
	if (fabs(a-trunc(a)) <= EPS)
		a--;
	la = sumP(a);
	lb = sumP(b);
	//cout << la << " " << lb << endl;
	cout << sub(lb, la);
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

inline ll fpow(ll a,ll x)
{
    if(x==0)return 1;	
    if(x&1) 
    {
        return a*fpow(a,x-1)%Base;
    } 
    else
    {
        ll t=fpow(a,x/2);
        return t*t%Base;
    }
}

inline ll diMod(ll A, ll B)
{
    //(A/B)%Base
    ll result = (A * fpow(B, Base-2)) % Base; 
    return result;
}
