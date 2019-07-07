#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://ntucoder.net/Problem/Details/122
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	double a,b;
	cin>>a>>b;
	ll m=a,n=b;
	m = (a>m? m+1 : m);
	cout<<(m+n)*((n-m+1))/2;
	return 0;
}
