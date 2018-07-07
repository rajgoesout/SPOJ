// https://www.spoj.com/problems/ALCATRAZ1/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int s;
    int last;
    for (int i = 1; i <= t; i++) {
        cin >> s;
        int j = 0, sum = 0;
	while (s != '\0') {
	    last =  s % 10;
	    s = s/10;
	    sum += last;
	}
        cout << sum << endl;
    }
    return 0;
}
