#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, arr[30010], arr2[30010], min = 10000000;
	cin >> n;
	for(ll i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	sort(arr, arr + n);
	ll max2 = arr[n - 1];
	for(ll i = n - 1; i >= 0; i--)
	{
		if (arr[i] != max2)
		{
			max2 = arr[i];
			break;
		}
	}
	cout << max2 << " ";
	for(ll i = 0; i < n; i++)
	{
		if (arr2[i] == max2)
		{
			cout << i + 1;
			break;
		}
	}
	return 0;
}
