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

struct strength{
	ll x;
	ll y;
};

bool cmp(strength &a, strength&b){
	return a.x < b.x;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	struct strength arr[1005];
	ll s, n; cin>>s>>n;
	fo(i, n){
		cin>>arr[i].x>>arr[i].y;
	}
	sort (arr, arr + n, cmp);
	fo(i, n){
		if ( s <= arr[i].x){
			cout<<"NO";
			return 0;
		}
		else	
			s += arr[i].y;
	}
	cout<<"YES";
	return 0;
}
