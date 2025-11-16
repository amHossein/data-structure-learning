#include <iostream>

// NOTE the formula is more efficient: (n*(n-1))/ 2
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}
int main()
{
    std::cout<<sum(5);
    return 0;
}