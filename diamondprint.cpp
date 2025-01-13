#include<iostream>
using namespace std;
int main(){
    int row,col,space;
    for(row=1;row<=4;row++){
        for(space=1;space<4-row;space++){
            cout<<" ";
        }
        for(col=1;col<=row*2-1;col++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}