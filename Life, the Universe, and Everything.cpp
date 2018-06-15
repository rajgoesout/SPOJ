#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 42) {
        cout << n << endl;
        cin >> n;
    }
    cout << 42 << endl;
    return 0;
}
