#include<iostream>
using namespace std;
void pattern(int n){
    for(int i = 0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
   int space = 2*(n-1);
       for(int j=0;j<=i;j++){
           cout<<" ";
   }
   for(int j=0;j<=i;j++){
       cout<<"*";
   }
   cout<<endl;
    }
    for(int i = n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
   int space = 2*(n-1);
       for(int j=0;j<=i;j++){
           cout<<" ";
   }
   for(int j=0;j<=i;j++){
       cout<<"*";
   }
   cout<<endl;
    }
}

    
    int main()
{
    int n = 5;

    pattern(n);

    return 0;
}