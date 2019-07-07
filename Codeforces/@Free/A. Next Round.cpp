#include <bits/stdc++.h>

#define Input       	freopen("C:/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i<=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link: http://codeforces.com/problemset/problem/158/A
//====================================================
ll k, n, result=0;
ll arr[1000];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	cin>>n>>k;
	fo(i,n)
		cin>>arr[i];
	fo(i,n)
	{
		if (arr[i] >= arr[k-1] && arr[i] > 0)
		result++;
	}
	cout<<result;	
	return 0;
}
