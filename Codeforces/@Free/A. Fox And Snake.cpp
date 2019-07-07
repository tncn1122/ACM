#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/510/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	freopen("output.txt", "w", stdout);
	ll n,m;
	cin>>n>>m;
	fo(i,n){
		if ((i + 1) % 2 != 0)	fo(j,m)	cout<<"#";
		else 
			if ( (i + 1) % 4 != 0){
				fo(j,m)
				if ( j == m -1) cout<<"#";
				else cout<<".";
			}
			else{
				fo(j,m)
				if ( j == 0) cout<<"#";
				else cout<<".";
			}
		cout<<endl;
	}
	return 0;
}
