#include<iostream>
using namespace std;
bool isPalindrome(string str){
    int n = str.length();
    for(int i = 0;i<n;i++){
        if (str[i]!=str[n-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cout<<"enter a string";
    cin>>str;
    if(isPalindrome(str)){
        
    cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
return 0;
}
