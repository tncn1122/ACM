#include <bits/stdc++.h>
using namespace std;

#define  Infile        	freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  fu(i,a,b) 		for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(long long i=(a); i>=(b); --i)
#define  fo(i,n) 		for(long long i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second


typedef double db;
typedef long long ll;
clock_t TimeBegin, TimeEnd;
ll const INF = 1e18;
ll const Base = 1;


inline ll mod(string num, ll a);
inline ll diMod(ll A, ll B);
inline ll fpow(ll a,ll x);
inline void Tstart();
inline void Tstop();



//declare
string s, ans = "";
ll cnt = 0;
//============//


void Solve()
{
	cin >> s;
	fo(i, s.length())
	{
		if (s[i] != '1')
			ans.push_back(s[i]);
		else
			cnt++;
	}
	bool check = false;
	fo(i, ans.length())
	{
		if (ans[i] == '2' && !check)
		{
			check = true;
			fo(i, cnt)
				cout << '1';
		}
		cout << ans[i];
	}
	if (!check)
		fo(i, cnt)
			cout << '1';
}


//=============================================================================//

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;

	Solve();

	return 0;
}

//=============================================================================//
//=============================================================================//

inline ll mod(string num, ll a) 
{ 
	//string%a
    ll res = 0; 
    fo(i, num.length()) 
         res = (res*10 + (ll)num[i] - '0') %a;
    return res; 
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

inline void Tstart()
{
	TimeBegin = clock();
}

inline void Tstop()
{
	TimeEnd = clock();
	cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
}
