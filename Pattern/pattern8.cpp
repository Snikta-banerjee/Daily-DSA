#include <iostream>
using namespace std;
int main () {
    int n,i ;
    char ch;
    cin >> n;
    for (i = n ; i >= 0 ;i--){
        for (char ch = 'A'; ch < 'A'+i; ch++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}