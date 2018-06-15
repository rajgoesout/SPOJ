#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    double x, y;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        cout << x + y << endl;
    }
    return 0;
}
