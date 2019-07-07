#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/122/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll lucky[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	ll n; cin>>n;
	fo(i,14){
		if(n%lucky[i]==0){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
