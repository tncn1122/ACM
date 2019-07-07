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
	ll n,t; cin>>n>>t;
	string s; cin>>s;
	fo(i, t){
		fo(j, n-1){
			if(s[j] == 'B' && s[j+1] == 'G'){
				swap(s[j],s[j+1]);
				j++;
			}
		}
	}
	cout<<s;
	return 0;
}
