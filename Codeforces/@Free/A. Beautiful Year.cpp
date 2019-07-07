#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/271/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll y; cin>>y;
	ll a,b,c,d;
	fu(i , y+1, 100000){
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		if ( a!=b && a!=c && a!=d && b!=c && d!=b && c!=d){
			cout<<i;
			break;
		}
	}
	return 0;
}
