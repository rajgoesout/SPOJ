// https://www.spoj.com/problems/CADYDIST/
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

void merge(long arr[], long l, long m, long r) {
    long i, j, k;
    long n1 = m - l + 1;
    long n2 = r - m;

    long L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(long arr[], long l, long r) {
    if (l < r) {
        long m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    long n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        long c[n], p[n];
        for (long i = 0; i < n; i++) {
            cin >> c[i];
        }
        for (long i = 0; i < n; i++) {
            cin >> p[i];
        }
        mergeSort(c, 0, n - 1);
        RevMergeSort(p, 0, n - 1);
        long sum = 0;
        for (long i = 0; i < n; i++) {
            sum += c[i] * p[i];
        }
        cout << sum << endl;
    }
    return 0;
}
