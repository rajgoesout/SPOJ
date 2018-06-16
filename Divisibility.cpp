// https://www.spoj.com/problems/SMPDIV/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x, y;
    for (int i = 1; i <= t; i++) {
        cin >> n >> x >> y;
        for (int j = 2; j < n; j++) {
            if (j % x == 0 && j % y != 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
