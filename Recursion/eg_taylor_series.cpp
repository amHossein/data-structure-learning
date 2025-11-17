#include <iostream>


double taylor(int x, int n)
{
    static double p=1, f=1;
    double result;

    if(n==0)
        return 1;
    
    result = taylor(x,n-1);
    p *= x;
    f *= n;

    return result+p/f;
}

int main()
{
    std::cout<< taylor(1,20);
    return 0;
}