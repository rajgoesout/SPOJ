// https://www.spoj.com/problems/SAMER08F/
#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n, sq;
        cin >> n;
        if (cin.eof())
            break;
        sq = n * (n + 1) * (2 * n + 1) / 6;
        if (n == 0)
            cout << endl;
        else
            cout << sq << endl;
    }
    return 0;
}
