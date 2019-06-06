#include <iostream>
using namespace std;

void calcul(float a,int b, int c=0){
	cout<<1;
}

void calcul(float a, int b, int c=0){
	cout<<2;
}

/*void calcul(int a,int b){
	cout<<3;
}*/
int main(){
	calcul(1.0,1);

	return 0;
}
