#include <bits/stdc++.h>

#define Input       	freopen("C:/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i<=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link: http://codeforces.com/problemset/problem/118/A
//====================================================

string s;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	cin>>s;
	fo(i,s.length())
	{
		s[i]=tolower(s[i]);
		if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
		{
		s.erase (i,1);
		i--;
		}
		else
		{
		s.insert(i,1,'.');
		i++;
		}
	}
	cout<<s;
	return 0;
}
