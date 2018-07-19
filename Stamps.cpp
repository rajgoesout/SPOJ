// https://www.spoj.com/problems/STAMPS/
#include <iostream>
using namespace std;

void RevMerge(long a[], long low, long high, long mid) {
    long i = low, j = mid + 1, k = 0;
    long temp[high - low + 1];

    while (i <= mid && j <= high) {
        if (a[i] > a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid) {
        temp[k++] = a[i++];
    }

    while (j <= high) {
        temp[k++] = a[j++];
    }

    for (i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}


void RevMergeSort(long a[], long low, long high) {
    long mid;
    if (low < high) {
        mid = (low + high) / 2;
        RevMergeSort(a, low, mid);
        RevMergeSort(a, mid + 1, high);

        RevMerge(a, low, high, mid);
    }
}

int main() {
    int t;
    cin >> t;
    long s, f;
    for (int i = 1; i <= t; i++) {
        cin >> s >> f;
        long a[f], sum = 0;
        for (long j = 0; j < f; j++) {
            cin >> a[j];
            sum += a[j];
        }
        if (s > sum) {
            cout << "Scenario #" << i << ":\n";
            cout << "impossible\n";
        } else {
            long min = 0, x = 0;
            RevMergeSort(a, 0, f - 1);
            while (s > min) {
                min += a[x];
                ++x;
            }
            cout << "Scenario #" << i << ":\n";
            cout << x << endl;
        }
        cout << endl;
    }
    return 0;
}
