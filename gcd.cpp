#include <iostream>
using namespace std;

int gcd(int num1,int num2) {
    int result = min(num1, num2);

    while (result > 0) {
        if (num1% result == 0 && num2 % result == 0) {//gcd is just a gcd if 48 AND 18 NUMBER GIVEN SO WHOSE DIVISOR IS 0 IS CALLED GCD.AND THEN WE FIND COMMON ON BOTH NUMBER AND THEN FIND HIGHEST NUMBER IN THAT REPESTED NUMBER..
            break;
        }
        result--;
    }

    return result;
}

int main() {
    int num1, num2;
    
    cin >> num1 >> num2;

    cout <<"GCD of " << num1 << " and " << num2<< " is: " << gcd(num1, num2) << endl;


    return 0;
}
//