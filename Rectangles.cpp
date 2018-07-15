// https://www.spoj.com/problems/AE00/
#include <iostream>
#include <cmath>

using namespace std;

int countRect(int n) {
    int x = 0;
    for (int length = 1; length <= sqrt(n); ++length)
        for (int height = length; height * length <= n; ++height)
            x++;
    return x;
}

int main() {
    int n;
    cin >> n;
    cout << countRect(n) << endl;
    return 0;
}
