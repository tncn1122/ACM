#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/141/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	string a,b,c;
	cin>>a>>b>>c;
	bool found;
	fo(i,a.length()){
		found = false;
		fo(j,c.length()){
			if (a[i] == c[j]){
				c.erase(j,1);
				found = true;
				break;
				}	
		}
		if (found == false) { cout<<"NO"; return 0;}
	}
	fo(i,b.length()){
		found = false;
		fo(j,c.length()){
			if (b[i] == c[j]){
				c.erase(j,1);
				found = true;
				break;
				}
		}
		if (found == false) { cout<<"NO"; return 0;}
	}
	if (c.length() > 0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
