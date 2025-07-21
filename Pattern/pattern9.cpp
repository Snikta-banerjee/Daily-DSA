#include <iostream>
using namespace std;
int main () {
    int n,i,j;
    char ch;
    cin >> n;
    for (i = 0 ; i < n ; i++){
        char ch = 'A'+i;
        for (j= 0; j <i+1 ;j++){
            cout << ch;
        }
        cout << endl;
    }
}