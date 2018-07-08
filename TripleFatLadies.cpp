// https://www.spoj.com/problems/EIGHTS/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    unsigned long long k;
    for (int i = 1; i <= t; i++) {
        cin >> k;
        if (k == 1)
            cout << 192 << endl;
        else
            cout << 192 + (k - 1) * 250 << endl;
    }
    return 0;
}
