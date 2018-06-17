// https://www.spoj.com/problems/ALCATRAZ1/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    char s[100];
    for (int i = 1; i <= t; i++) {
        cin >> s;
        int j = 0, sum = 0;
        for (j = 0; s[j] != '\0'; j++) {
            switch (s[j]) {
                case '1':
                    sum++;
                    break;
                case '2':
                    sum += 2;
                    break;
                case '3':
                    sum += 3;
                    break;
                case '4':
                    sum += 4;
                    break;
                case '5':
                    sum += 5;
                    break;
                case '6':
                    sum += 6;
                    break;
                case '7':
                    sum += 7;
                    break;
                case '8':
                    sum += 8;
                    break;
                case '9':
                    sum += 9;
                    break;
                default:
                    sum += 0;
                    break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
