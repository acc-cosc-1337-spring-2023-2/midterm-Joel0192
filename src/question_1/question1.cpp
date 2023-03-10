#include "question1.h"
#include<iostream>
using std::cout;

bool test_config()
{
    
    return true;
}

double get_sales_commission(double sales)
{
    auto result = 0;

    if(sales >= 0 && sales <= 499)
    {
        result = sales * .05;
    }
    else if(sales >= 500 && sales <= 999)
    {
        result = sales * .06;
    }
    else if(sales >= 1000 && sales <= 1499)
    {
        result = sales * .07;
    }
    else if(sales >= 1500)
    {
        result = sales * .08;
    }
    else
    {
        result = sales * 0;
    }

    return result;
}
