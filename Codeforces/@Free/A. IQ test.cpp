#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/25/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll n, arr[1000]; cin>>n;
	ll posE=1000, posO=1000;
	bool e = false, o = false;
	fu(i,1,n){
		cin>>arr[i];
		if (arr[i] % 2 == 0){
			if (posE != 1000)	e = true;
			if (i <= posE)	posE=i;
		}
		if (arr[i] % 2 == 1 ){
			if (posO != 1000)	o = true;
			if (i <= posO)	posO=i;
		}
	}
	if (e == false)	cout<<posE;
	if (o == false) cout<<posO;
	return 0;
}
