#include <iostream>

int recursive_factorial(int n)
{
    if(n<0)
        return 0; // not defined
    if(n==0)
        return 1;
    return recursive_factorial(n-1)*n;
}
int iteration_factorial(int n)
{
    if(n<0)
        return 0; // not defined
    int factorial = 1;
    for(int i=1; i<= n; i++)
        factorial = factorial*i;
    
    return factorial;
}

int main()
{
    std::cout<<recursive_factorial(0) << std::endl;
    std::cout<<iteration_factorial(1);
    return 0;
}