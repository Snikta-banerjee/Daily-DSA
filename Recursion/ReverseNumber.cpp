#include <iostream>
using namespace std;
void reverseNumber (int n,int i)
{
    if ( n==0)
         return ;

cout << n << " ";
reverseNumber (n-1,i);
}
int main (){
    int n;
    cout << "Enter a number:";
    cin >> n;
    reverseNumber (n,1);
    return 0;
}
