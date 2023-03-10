#include "question1.h"
#include<iostream>
using std::cout;
using std::cin;

int main()
{
    auto integer = 0;
    auto result = 0;
    do
    {
        cout<<"Enter a sales range(or to exit, enter -1): ";
        cin>>integer;
        if(integer >= 0)
        {
            result = get_sales_commission(integer);
            cout<<"Sales of "<<integer<<" yields a commission of "<<result<<"\n\n";
        }
        
    } while (integer != -1);
    
    

    
    return 0;
}