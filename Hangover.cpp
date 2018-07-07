// https://www.spoj.com/problems/HANGOVER/
#include <iostream>
using namespace std;

int main(){
	float c, sum;
	int n;
	while(true){
		cin >> c;
		if (c==0.00)
		break;
		sum=0.0;
		n=1;
		while(sum<c){
			sum += float(1/float(n+1));
			n++;
		}
		cout << n-1 << " card(s)" << endl;
	};
}
