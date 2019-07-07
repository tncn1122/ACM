#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/96/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	string s;
	cin>>s;
	ll num=1;
	fu(i,1,s.length()-1)
	{
		if(s[i]==s[i-1])
			num++;
		else
			num=1;
		if(num>=7)
			{
			cout<<"YES";
			return 0;
			}
	}
	cout<<"NO";
	return 0;
}
