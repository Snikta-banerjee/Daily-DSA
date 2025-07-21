#include <iostream>
using namespace std;
int main () {
    int n;
    int count = 0;
    cout << "Enter the number:";
    cin >> n;

    while (n > 0){
        int digit = n%10 ;
        n=n/10;
        count++;
        
    }
    cout << "Total number of digits:"<< count;
    cout << endl;
    return 0;
}