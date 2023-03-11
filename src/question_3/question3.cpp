#include "question3.h"
#include <iostream>
using std::string;
bool test_config()
{
    return true;
}

int binary_to_decimal(string binary)
{
    
    int decimal = 0;
    int base = 1;
    int len = binary.length();

    for (int i = len - 1; i >= 0; i--) 
    {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

    
