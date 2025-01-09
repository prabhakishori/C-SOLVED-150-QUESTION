#include<iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int Min = arr[0];
    int Max = arr[0];

    for (int i = 1; i < n; i++) { 
        if (arr[i] < Min) {
            Min = arr[i];
        }
        if (arr[i] > Max) { 
            Max = arr[i];
        }
    }

    cout << "Min: " << Min << endl;
    cout << "Max: " << Max << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMinMax(arr, n);
    return 0;
}
