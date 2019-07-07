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
	string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	if (n <= 5) cout<<name[n-1];
	else{
		ll i = 0;
		ll pa = 0;
		while ((pa + 5*pow(2,i) < n)){
			pa += 5*pow(2,i);
			i++;
		}
		if (pa + 1 <= n && n <= pa + 1*pow(2,i))	cout<<name[0];
		if (pa + 1*pow(2,i) + 1 <= n && n <= pa + 2*pow(2,i))	cout<<name[1];
		if (pa + 2*pow(2,i) + 1 <= n && n <= pa + 3*pow(2,i))	cout<<name[2];
		if (pa + 3*pow(2,i) + 1 <= n && n <= pa + 4*pow(2,i))	cout<<name[3];
		if (pa + 4*pow(2,i) + 1 <= n && n <= pa + 5*pow(2,i))	cout<<name[4];
	}
	return 0;
}
