#include <iostream>

double taylor_iter(int x, int n)
{
    double s = 1;
    int i; 
    double num=1;
    double den=1;

    for(i=1; i<n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }

    return s;
}
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
    std::cout<< taylor(1,20) << std::endl;
    std::cout<< taylor_iter(1,20);
    return 0;
}