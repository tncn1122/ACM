#include <iostream>
using namespace std;
int main()
{
	int t;
	long long l, r;
	long long  S;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> l >> r;
		S = (r+l)*(r-l+1)/2;
		cout << S << endl;
	}
	return 0;
}
