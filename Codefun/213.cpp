#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n; cin >> n;
	for(int i = -n; i <= n; i++)
	{
		for(int j = 0; j < abs(i); j++)
			cout << " ";
		for(int j = 0; j <= 2*n- 2*abs(i); j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
