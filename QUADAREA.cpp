// https://www.spoj.com/problems/QUADAREA/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    double a, b, c, d;
    for (int i = 1; i <= t; i++) {
        cin >> a >> b >> c >> d;
        double s = (a + b + c + d) / 2;
        printf("%.2lf\n", sqrt((s - a) * (s - b) * (s - c) * (s - d)));
    }
    return 0;
}
