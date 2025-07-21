#include <iostream>
using namespace std;
int  main () {
    int n,i,j;
    char ch;
    cin >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            cout << " "; 
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (j = 0;j<2*i+1; j++ ){
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;  
        }
        for (j=0;j<n-i-1;j++){
            cout << " "; 
        }
        cout << endl;
    }
} 