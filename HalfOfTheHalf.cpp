// https://www.spoj.com/problems/STRHH/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    char s[200];
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> s;
        int len = strlen(s);
        for (int j = 0; j < len / 2; j += 2) {
            cout << s[j];
        }
        cout << endl;
    }
    return 0;
}
