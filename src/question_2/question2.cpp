#include "question2.h"

bool test_config()
{
    return true;
}

int find_gcd(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
        return find_gcd(num2, num1 % num2);
    }
}
    