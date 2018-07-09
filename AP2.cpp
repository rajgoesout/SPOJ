// https://www.spoj.com/problems/AP2/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long int term3, lastTerm3, sum, a, d, n;
    while (t > 0) {
        scanf("%lld %lld %lld", &term3, &lastTerm3, &sum);
        n = (2 * sum) / (term3 + lastTerm3);
        d = (lastTerm3 - term3) / (n - 5);
        a = term3 - (2 * d);
        printf("%lld\n", n);
        for (long long int j = 1; j <= n; j++) {
            printf("%lld ", a);
            a += d;
        }
        cout << endl;
        --t;
    }
    return 0;
}
