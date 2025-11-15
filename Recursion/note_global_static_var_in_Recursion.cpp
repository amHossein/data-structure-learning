#include <iostream>


// global variables works like static variables
int x = 0;

int func(int n)
{
    //static int x = 0;
    if(n>0)
    {
        x++;
        return func(n-1)+x;
    }
    return 0;
}

int main()
{
    std::cout<<func(5) << std::endl; // in: x=0 , out: x=5
    std::cout<<func(5) << std::endl; // in: x=5 , out: x=10

    return 0;
}