// Merge Sort and Quick Sort implementations

#include <iostream>
#include <vector>
using namespace std;

// Merge Sort
void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    // Merge
    vector<int> temp;
    int i = l, j = m + 1;
    while (i <= m && j <= r) {
        if (arr[i] < arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);
    for (int k = l; k <= r; k++) arr[k] = temp[k - l];
}

// Quick Sort
int partition(vector<int>& arr, int l, int r) {
    int pivot = arr[r], i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) swap(arr[i++], arr[j]);
    }
    swap(arr[i], arr[r]);
    return i;
}

void quickSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    mergeSort(arr1, 0, n - 1);
    quickSort(arr2, 0, n - 1);

    // Output merge sort result
    for (int x : arr1) cout << x << " ";
    cout << endl;

    // Output quick sort result
    for (int x : arr2) cout << x << " ";
    cout << endl;

    return 0;
}