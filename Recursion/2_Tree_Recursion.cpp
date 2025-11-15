#include <iostream>

// "Tree Recursion" : when function calls itself more than once
void func(int n)
{
    if(n>0)
    {
        std::cout<<n;
        func(n-1);
        func(n-1);
    }
}
int main()
{
    func(3);
    return 0;
}