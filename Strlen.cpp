#include <iostream>
using namespace std;

int main() {
   string input;
   cout<<"Enter the length of the string "<<endl;
   cin>>input;
   int  length = 0;
 
  for(int i = 0;i<=input[i]!='\0';i++){
      cout<<length++<<endl;
  }
  cout<<"lenght of the string is"<<" "<<length;

    return 0;
}