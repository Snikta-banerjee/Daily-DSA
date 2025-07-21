#include <iostream>
using namespace std;
int main (){
    int i,j,n,min,temp;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    for (i = 0; i <= n-2 ; i++){
        min = i;
        for (j = i; j <= n-1; j++){
            if (arr[j]< arr[min]){
                min = j;
            }
        }    
        if (arr[min] != arr[i]){
            temp = arr[min];
            arr[min]= arr[i];
            arr[i]= temp;

        }
    }       
    cout << "Minimum element is: ";
    for (i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
