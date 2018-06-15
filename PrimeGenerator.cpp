#include <iostream>
using namespace std;

bool primeRec(long n, long i = 2) {
    if (n <= 2)
        return n == 2;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    return primeRec(n, i + 1);
}

int main() {
    int t;
    cin >> t;
    long m, n;
    for (int i = 1; i <= t; i++) {
        cin >> m >> n;
        for (long j = m; j <= n; j++)
            if (primeRec(j))
                cout << j << endl;
        cout << endl;
    }
}
