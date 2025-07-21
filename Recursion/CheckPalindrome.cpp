#include <iostream>
using namespace std;
bool checkpalindrome (string &s,int i){
    if (i >= s.size()/2){
        return true;
    }
    if (s[i] != s[s.size()-i-1]){
        return false;
    }
    return checkpalindrome (s,i+1);
}
int main (){
    string s;
    cout << "enter a word: ";
    cin >> s;
    bool palindrome = checkpalindrome (s,0);
    if (palindrome){
        cout << "the string is palindrome";
    }
    else {
        cout << "the string is not palindrome";
    }
    return 0;
}