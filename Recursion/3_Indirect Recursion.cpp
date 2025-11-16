#include <iostream>

// "Indirect Recursion" : a cycle of functions calling eachother
void funcA(int n);
void funcB(int n);


void funcA(int n)
{
    if(n>0)
    {
        std::cout<<n;
        funcB(n-1);
    }
}
void funcB(int n)
{
    if(n>1)
    {
        std::cout<<n;
        funcA(n/2);
    }

}
int main()
{
    funcA(20);
    return 0;
}

