// https://www.spoj.com/problems/FCTRL/
#include <iostream>
using namespace std;

long long findTrailingZeroes(long long n) {
    long count = 0;
    for (long long i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

int main() {
    long t;
    long long n;
    cin >> t;
    for (long i = 1; i <= t; i++) {
        cin >> n;
        cout << findTrailingZeroes(n) << endl;
    }
    return 0;
}
