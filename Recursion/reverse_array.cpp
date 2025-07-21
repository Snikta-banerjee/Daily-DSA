#include <iostream>
using namespace std;

void reverseArray (int arr[],int i,int n)
{
    if(i>=n/2) 
    return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(arr,i+1,n);
}
int main (){
    int n,i;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array:";
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    reverseArray (arr,0,n);
    cout << "Reversed array is: ";
    for (i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}