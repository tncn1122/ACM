#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/379/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll a,b;
	ll ans = 0, mo1 = 0, mo2 = 0;
	cin>>a>>b;
	while (a > 0){
		ans += a;
		mo1 = (a + mo1) % b;
		a = (a + mo2) / b;
		mo2 = mo1;
	}
	cout<<ans;
	return 0;
}
