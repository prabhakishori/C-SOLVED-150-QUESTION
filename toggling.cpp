#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter a character:";
    cin>>str;
    for(int i = 0; str[i]!='\0';i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else if (isupper(str[i])){
                str[i]=toupper(str[i]);
           
                
            }
        }
        cout<<"Toggled string:"<<str;
        
    }
