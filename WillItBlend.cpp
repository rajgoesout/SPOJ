// https://www.spoj.com/problems/URJC2_C/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    long n, k;
    for (int i = 1; i <= t; i++) {
        cin >> n >> k;
        long ni;
        for (long j = 1; j <= n; j++) {
            cin >> ni;
            if (k > ni)
                cout << "Yes, it blends!" << endl;
            else
                cout << "Well, it mostly blended" << endl;
        }
    }
    return 0;
}
