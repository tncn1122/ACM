#include <bits/stdc++.h>

#define Input       	freopen("C:/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link: http://codeforces.com/contest/344/problem/D
//====================================================

string s;
stack<char> w;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	cin>>s;

	ll Length = s.length();
	if (Length%2)
	{
		cout<<"No";
		return 0;
	}
	else
	{
		fo(i,Length)
		{
			if(w.size()>0 && s[i]==w.top())
			{
				w.pop();
				continue;
			}
			w.push(s[i]);
		}
		if (w.size()!=0)
		cout<<"No";
		else
		cout<<"Yes";
	}
	return 0;
}
