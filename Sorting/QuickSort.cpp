#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot)
            i++;
        while (j >= low && arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int parti = partition(arr, low, high);
        QuickSort(arr, low, parti - 1);
        QuickSort(arr, parti + 1, high);
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
