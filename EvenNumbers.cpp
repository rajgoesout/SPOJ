// https://www.spoj.com/problems/EC_CONB/
#include <iostream>
using namespace std;

unsigned long reverseBits(unsigned long n) {
    unsigned long rev = 0;

    while (n > 0) {
        rev <<= 1;

        if (n & 1 == 1)
            rev ^= 1;
        n >>= 1;
    }

    return rev;
}

int main() {
    int n;
    cin >> n;
    long x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 != 0) {
            cout << x << endl;
        } else {
            cout << reverseBits(x) << endl;
        }
    }
    return 0;
}
