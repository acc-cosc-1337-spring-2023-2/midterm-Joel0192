#include "question3.h"
#include<iostream>
using std::string;
using std::cout;
using std::cin;
int main()
{
    string binary_str;

    do 
    {
        cout << "Enter an 8-digit binary string (or enter y to exit): ";
        cin >> binary_str;

        if (binary_str == "y" || binary_str == "Y") 
        {
            break;
        }

        if (binary_str.length() != 8) 
        {
            cout << "Invalid binary string length. Please enter an 8-digit binary string." <<"\n";
            continue;
        }

        bool invalid_char = false;
        for (char c : binary_str) 
        {
            if (c != '0' && c != '1') 
            {
                invalid_char = true;
                break;
            }
        }

        if (invalid_char) 
        {
            cout << "Invalid character found in binary string. Please enter a binary string consisting of only 0s and 1s." << "\n";
            continue;
        }

        int decimal = binary_to_decimal(binary_str);
        cout << "Decimal value of binary string is: " << decimal <<"\n";

        
    }while(binary_str != "y" || binary_str != "Y");
    return 0;
}