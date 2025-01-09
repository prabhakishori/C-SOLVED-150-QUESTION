#include <cctype>
#include <iostream>
#include <string>

using namespace std;

string remove_non_alphabets(string str)
{
    string result ;
    for (int i = 0; i < str.length(); i++) { 
        if (isalpha(str[i])){               
            result = result+str[i];   
        }
    }
    return result;
}

int main()
{
    string str;
    cin>>str;

    cout << "Alphabets only: " << remove_non_alphabets (str)
         << endl;
         

    return 0;
}




