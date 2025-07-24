// Implement Bubble Sort, Selection Sort, and Insertion Sort

#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[i], arr[min_idx]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), arr2(n), arr3(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }

    bubbleSort(arr);
    selectionSort(arr2);
    insertionSort(arr3);

    // Output results of bubble sort
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Output results of selection sort
    for (int x : arr2) cout << x << " ";
    cout << endl;

    // Output results of insertion sort
    for (int x : arr3) cout << x << " ";
    cout << endl;

    return 0;
}