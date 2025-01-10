#include<bits/stdc++.h>
using namespace std;

int secSmallest(int arr[], int n)
{
  
   int smallest = arr[0];

   // we find the smallest element here
   for (int i=0; i < n; i++){
     if(arr[i] < smallest)
       smallest = arr[i];
   }

   // temporarily assinging largest max value
   int sec_smallest = INT_MAX;

   
   for (int i=0; i < n; i++){
      if(arr[i] != smallest && arr[i] < sec_smallest)
        sec_smallest = arr[i];
   }

   return sec_smallest;

}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The second smallest element is: " << secSmallest(arr, n) << endl;
    return 0;
}