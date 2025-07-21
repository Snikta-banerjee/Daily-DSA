#include <iostream>
using namespace std ;
int main (){
    int n, Digit , reverseNumber=0 ;
    cout << "Enter the number";
    cin >> n;
    while (n > 0){
        Digit = n % 10;
        n = n/10;
        reverseNumber = reverseNumber *10 + Digit;
    }
    cout << reverseNumber;
}