#include <iostream>
using namespace std;
int main () {
    int a, b,gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (a>0 && b>0) {
        if (a>b){
            a=a%b;
        }
        else {
            b=b%a;
        }
        if (a == 0){
            gcd = b;
        }
        else if (b==0){
            gcd = a;
        }
    }
    cout << "GCD is: " << gcd;
    return 0;
}
