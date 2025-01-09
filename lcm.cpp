#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM of " << a << " and " << b << " is: " << findLcm(a, b) << endl;

    return 0;
}
