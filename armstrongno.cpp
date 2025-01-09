#include <iostream>
#include <cmath>
using namespace std;

int isarmstrong(int num) {
    int n = 0, originalNum = num, sum = 0;
    while (originalNum != 0) {
        originalNum = originalNum / 10;
        n++;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        int digit = originalNum % 10;  
     sum = sum + pow(digit, n);
 
        originalNum = originalNum / 10;  
    }

    // Return whether the sum equals the original number
    return (num == sum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isarmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
