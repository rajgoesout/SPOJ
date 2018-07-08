// https://www.spoj.com/problems/NSTEPS/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    for (int i = 1; i <= t; i++) {
        cin >> x >> y;
        if (x == y) {
            if (x % 2 == 0) {
                cout << x * 2 << endl;
            } else {
                cout << x * 2 - 1 << endl;
            }
        } else if (x == y + 2) {
            if (x % 2 == 0) {
                cout << (x - 1) * 2 << endl;
            } else {
                cout << (x - 1) * 2 - 1 << endl;
            }
        } else {
            cout << "No Number" << endl;
        }
    }
    return 0;
}
