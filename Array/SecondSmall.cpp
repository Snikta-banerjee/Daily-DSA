#include <iostream>
using namespace std;
int main() {
    int i,n;
    cout << "Enter the size of the array :";
    cin >> n;
    cout << "Enter the elements :";
    int arr[n];
    for (i =0;i<n;i++){
        cin >> arr[i];
    }
    int Smallest = arr[0];
    int SecSmall = arr[0];
    for (i=0;i<n;i++){
        if (arr[i]< Smallest){
            Smallest = arr[i];
        }
    }
    for (i=0;i<n;i++){
        if (arr[i] != Smallest && arr[i] < SecSmall){
            SecSmall = arr[i];
        }
    }
    cout << "The Second smallest element is: " << SecSmall ;
}