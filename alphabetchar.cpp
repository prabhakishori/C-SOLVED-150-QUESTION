#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter character: " << endl;
    cin >> ch;
    if (isalpha(ch))
    {
        cout<<ch<<" "<<"The character is alphabet";
    }else
    {
    cout<<ch<<"Not a alphabet";
}
}
    