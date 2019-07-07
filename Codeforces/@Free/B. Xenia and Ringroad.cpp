#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll n, m; cin>>n>>m;
	ll a, prev = 1, ans = 0;
	fo(i,m){
		cin>>a;
		//cout<<a<<" "<<prev<<endl;
		if ( a > prev)	ans += a - prev;
		else if ( a < prev) ans += n - prev + a;
		prev = a;
	}
	cout<<ans;
	return 0;
}
