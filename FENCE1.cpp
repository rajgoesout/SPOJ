// https://www.spoj.com/problems/FENCE1/
#include <iostream>
using namespace std;

int main() {
    int l;
    while (true) {
        cin >> l;
        if (!l)
            break;
        double ans = (double(l) * double(l)) / (2.00 * 3.14159);
        printf("%.2lf\n", ans);
    }
    return 0;
}
