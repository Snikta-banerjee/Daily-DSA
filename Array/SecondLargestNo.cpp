#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout << "Enter the size of the array :";
    cin >> n; // 1 2 3 4
    int arr [n];
    cout << "Enter the elements :";
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    int Largest = arr[0];
    int SecondLarge = arr[0];
        for (i=0;i<n;i++){
            if (arr[i] > Largest){
                Largest = arr[i];
            }
        }    
         for (i=0;i<n;i++){
            if (arr[i] != Largest){
                if (arr[i] > SecondLarge){
                     SecondLarge = arr[i];
                }
            }
        }
    cout << "The SecondLarge element is :" << SecondLarge ;
}