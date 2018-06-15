#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << (b*(b+1)*(2*b+1)/6)-((a-1)*a*(2*a-1)/6) << endl;
	return 0;
}
