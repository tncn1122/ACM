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
ll h, w;
typedef pair <ll, ll> pll;
//===========

bool isP(ll num)
{
	return (num&(num-1) == 0);
}

pll reS1(pll a)
{
	if (isP(a.second))
		return make_pair(a.second*1.25, a.second);
		
	ll tmpX = 1;
	while((tmpX<<1) <= a.first && (tmpX<<1) <= a.second*1.25)
	{
		tmpX <<= 1;
	}
	if (tmpX*1.25 <= a.second)
		return make_pair(tmpX, tmpX*1.25);
	else
		return make_pair(tmpX, a.second);
}

pll reS2(pll a)
{
	if (isP(a.first))
		return make_pair(a.first, a.first*1.25);
		
	ll tmpX = 1;
	while((tmpX<<1) <= a.second && (tmpX<<1) <= a.first*1.25)
	{
		tmpX <<= 1;
	}
	
	if (tmpX*1.25 <= a.first)
		return make_pair(tmpX*1.25, tmpX);
	else
		return make_pair(a.first, tmpX);
}


void Result()
{
	//code here
	cin >> h >> w;
	pll p1, p2, ans;
	p1 = reS1(make_pair(h, w));
	p2 = reS2(make_pair(h, w));
//	cout << p1.first << " " << p1.second << endl;
//	cout << p2.first << " " << p2.second << endl;
	if (p1.first*p1.second > p2.first*p2.second)
		ans = p1;
	else if (p1.first*p1.second < p2.first*p2.second)
		ans = p2;
	else
	{
		if (p1.first > p2.first)
			ans = p1;
		else
			ans = p2;
	}
	cout << ans.first << " " << ans.second;
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
