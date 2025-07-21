#include <iostream>
using namespace std;
int main () {
    int n,i,j;
    char ch;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (ch = 'E'-i ;ch < 'E';ch++){
            cout << ch;
        }
        cout << endl;
    }
}