#include <iostream>

// "Nested Recursion" : a recursive function that calls itself inside another recursive call
int func(int n)
{
    if(n>100)
        return n-10;
    return func(func(n+11));

}
int main()
{
    std::cout<<func(95);
    return 0;
}