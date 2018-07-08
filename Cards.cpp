// https://www.spoj.com/problems/CRDS/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    long n;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        long base = 0, stand = 0;
        base = n * (n - 1) / 2;
        stand = n * (n + 1);
        cout << (base + stand) % 1000007 << endl;
    }
    return 0;
}
