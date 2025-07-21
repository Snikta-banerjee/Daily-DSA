#include <iostream>
using namespace std;
int fibonacci(int n){
    if (n<=1)
    return n;
    int last = fibonacci (n-1);
    int slast = fibonacci (n-2);
    return last + slast;
}
int main (){
    int n;
    cout << "enter the position:";
    cin >> n;
    cout << "the " << n << "th term of fibonacci series is: " << fibonacci (n);
    return 0;
}