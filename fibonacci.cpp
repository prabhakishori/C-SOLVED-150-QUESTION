#include<iostream>
using namespace std;
int fibonacci(int n){
    int first = 0,second=1,next;
    if(n==0){
        return first;
    }
    for(int i=2;i<=n;i++){
        next=first +second;
        first=second;
        second = next;
    }
    return next;
}

int main(){
   int n;
    cout << "Enter a number: ";
   cin>>n;
   cout<<"The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
   return 0;
}
   

   

    
