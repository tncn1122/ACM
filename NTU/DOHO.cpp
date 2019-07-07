#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll hour, minu, sec;
ll tmpH = 0, tmpM = 0;
//===========


void Result()
{
	//code here
	cin >> hour >> minu >> sec;
	if (sec+1 == 60)
	{
		sec = 0;
		tmpM++;
	}
	else
		sec++;
	
	if (minu+tmpM == 60)
	{
		minu = 0;
		tmpH++;
	}
	else
		minu += tmpM;
	
	if (hour+tmpH == 24)
	{
		hour = 0;
	}
	else
		hour+=tmpH;
	cout << hour << " " << minu << " " << sec;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

