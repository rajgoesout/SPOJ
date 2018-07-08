// https://www.spoj.com/problems/ADDREV/
#include <iostream>
using namespace std;

int reverse(int a) {
    int rev = 0;
    while (a > 0) {
        rev = rev * 10 + a % 10;
        a /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    int x, y;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        x = reverse(x);
        y = reverse(y);
        cout << reverse(x + y) << endl;
    }
    return 0;
}
