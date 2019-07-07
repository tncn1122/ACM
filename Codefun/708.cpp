#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
	//n = abs(n);
	if (n < 2)	return false;
	for(ll i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	ll n; cin >> n;
	ll arr[30005];
	vector <ll> vt;
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
		
	for(ll i = 0; i < n; i++)
		if (isPrime(arr[i]))
			vt.push_back(arr[i]);
			
	cout << vt.size() << endl;
	sort(vt.begin(),vt.end());
	for(ll i = 0; i < vt.size(); i++)
		cout << vt[i] << " ";
	return 0;
}
