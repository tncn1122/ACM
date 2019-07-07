#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/160/A
//====================================================

bool cmp(ll a, ll b){
	return b < a;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll n, arr[102];
	ll sum = 0;
	cin>>n;
	fo(i, n){
		cin>>arr[i];
		sum += arr[i];
	}
	sort(arr,arr+n,cmp);
//	fo(i, n){
//		cout<<arr[i]<<endl;
//	}
	ll ans = 0, mm = 0;
	while(mm <= sum - mm){
		mm += arr[ans];
		ans++;
	}
	cout<<ans;
	return 0;
}
