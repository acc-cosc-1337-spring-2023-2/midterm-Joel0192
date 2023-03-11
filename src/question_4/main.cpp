#include "question4.h"
#include<iostream>
using std::cout;
using std::cin;
int main()
{
    double integer = 0;
    double result = 0;
    do
    {
        cout<<"Enter the temperature in celsius(or to exit, enter 100): ";
        cin>>integer;
        if(integer == 100)
        {
            break;
        }
        else
        {
            result = get_fahrenheit(integer);

            cout<<"The temperature in fahrenheit is "<<result<<"\n";
        }
        
        
    } while (integer != 100);
    
    return 0;
}