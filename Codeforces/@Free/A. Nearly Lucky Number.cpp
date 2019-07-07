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
	string s; cin>>s;
	ll count=0;
	fo(i, s.length()){
		if ( s[i] == '4' || s[i] == '7')
			count++;
	}
	if (count == 4 || count == 7)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
