#include <iostream>
using namespace std;
int main(){
    int i,j,temp,n;
    cout << "Enter the size od array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elememt: ";
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    for (i=0;i<=n-1;i++){
        j=i;
        while(j>0 && arr[j-1] > arr[j]){
            temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]= temp;
            j--;
        }
    }
    cout << "The Sorted array is: ";
    for (i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}