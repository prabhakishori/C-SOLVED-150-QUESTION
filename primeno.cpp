// C++ program to check if a
// Number is prime
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // base condition
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
   int num;
   cout<<"enter a number";
   cin>>num;
   if (isPrime(num)){
   cout<<"prime number"<<num;
  } else{
   cout<<"not a prime number"<<num;
  }
    return 0;
}