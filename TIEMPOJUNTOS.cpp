// https://www.spoj.com/problems/RETO2/
#include <iostream>
using namespace std;

int main() {
    int l1, r1, l2, r2, k, m = 0;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if (r1 == l2) {
        if (k == r1)
            m = 2;
        else m = 1;
    } else if (l2 <= r1) {
        for (int i = l2; i <= r1; i++)
            m++;
        if (k >= l2 && k <= r1)
            m--;
    }
    cout << m << endl;
    return 0;
}
