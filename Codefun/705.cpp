#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, arr[30010], min = 10000000;
	cin >> n;
	for(ll i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (min > arr[i])
		min = arr[i];
	}
	ll count = 0;
	for(ll i = 0; i < n; i++)
	{
		if (arr[i] == min)
		count++;
	}
	cout << min << " " << count;
	return 0;
}
