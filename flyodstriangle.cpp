#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i = 1;i<=5;i++){
        for(int j = 0;j<i;j++){
            cout<<n++<<" ";
    }
    cout<<endl;
    
}
return 0;
}
