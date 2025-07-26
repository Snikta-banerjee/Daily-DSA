#include <iostream>
using namespace std;
int main (){
    int i,n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i =0; i <n;i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for (i = 0; i<n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest no is " << largest ;
}