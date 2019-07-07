#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/69/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll sx = 0, sy = 0, sz = 0;
	ll x, y, z;
	ll n; cin>>n;
	fo(i, n){
		cin>>x>>y>>z;
		sx += x;
		sy += y;
		sz += z;
	}
	if ( sx == 0 && sy == 0 && sz == 0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
