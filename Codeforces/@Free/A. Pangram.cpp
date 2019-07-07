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
	ll n; cin>>n;
	string s; cin>>s;
	set <char> alp;
	fo(i,n){
		alp.insert(tolower(s[i]));
	}
	if (alp.size() >= 26) cout<<"YES";
	else cout<<"NO";
	return 0;
}
