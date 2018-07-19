// https://www.spoj.com/problems/AMR11E/
#include <iostream>
using namespace std;

const int MAX = 3000;

void RevMerge(int a[], int low, int high, int mid) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];

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


void RevMergeSort(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        RevMergeSort(a, low, mid);
        RevMergeSort(a, mid + 1, high);

        RevMerge(a, low, high, mid);
    }
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

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

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


int smartNumber(int n) {
    int primes[MAX] = {0};
    int result[MAX], k = 0;

    for (int i = 2; i < MAX; i++) {
        if (primes[i] == 0) {
            primes[i] = 1;
            for (int j = i * 2; j < MAX; j = j + i) {
                primes[j] -= 1;
                if ((primes[j] + 3) == 0) {
                    result[k] = j;
                    k++;
                }

            }
        }
    }
    mergeSort(result, 0, k - 1);

    return result[n - 1];
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        cout << smartNumber(n) << endl;
    }
    return 0;
}
