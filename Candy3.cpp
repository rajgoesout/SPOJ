// https://www.spoj.com/problems/CANDY3/
#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    long long int a[1000000], sum;
    while (t > 0) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            scanf("%lld", &a[i]);
        sum = 0;
        for (int i = 0; i < n; ++i) {
            sum = (sum + a[i]) % n;
        }
        if (sum == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        --t;
    }
    return 0;
}
