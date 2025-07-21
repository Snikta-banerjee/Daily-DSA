#include <iostream>
using namespace std;
void factorial (int n,int i,int &fac)
{
   if (i > n){
    return;
   }
   fac *= i;
   factorial(n, i + 1, fac);
}
int main ()
{
    int n ;
    cout << "Enter a number :";
    cin >> n ;
    int fac =1 ;
    factorial(n,1,fac);
    cout << "Factorial of " << n << " is: " << fac << endl;
    return 0;
}