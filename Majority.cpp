// https://www.spoj.com/problems/MAJOR/
#include <iostream>
using namespace std;

int findCandidate(int a[], int size) {
    int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++) {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}

int isMajority(int a[], int size, int cand) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (a[i] == cand)
            count++;
    if (count > size / 2)
        return 1;
    else
        return 0;
}

void printMajority(int a[], int size) {
    int cand = findCandidate(a, size);
    if (isMajority(a, size, cand))
        cout << "YES " << cand << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    long long n;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        printMajority(a, sizeof(a) / sizeof(a[0]));
    }
    return 0;
}
