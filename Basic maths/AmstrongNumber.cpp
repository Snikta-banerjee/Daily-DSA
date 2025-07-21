#include <iostream>
using namespace std;
int main() {
    int n,digit,sum = 0;
    cout << "Enter a number";
    cin >> n;
    int temp = n;
    while (n > 0){
        digit = n % 10;
        n= n /10;
        sum = (digit * digit * digit)+ sum;
    }
    if (sum == temp) {
        cout << "Armstrong number";
    } else {
        cout << "Not an Armstrong number";
    }
}