// https://www.spoj.com/problems/SIZECON/
#include <iostream>
using namespace std;

int main() {
	int t, n, sum=0;
	cin >> t;
	for (int i=1; i<=t; i++){
		cin >> n;
		if (n > 0)
			sum += n;
	}
	cout << sum << endl;
	return 0;
}
