#include <iostream>

int recursion_sum(int n)
{
    if(n==0)
        return 0;
    return recursion_sum(n-1)+n;
}
int iteration_sum(int n)
{
    int sum = 0;

    for(int i=1; i<=n; i++)
        sum = sum + i;
    
    return sum;
}
// NOTE the formula is more efficient: (n*(n-1))/ 2
int formula_sum(int n)
{
    return (n*(n+1)) / 2;
}

int main()
{
    std::cout<<recursion_sum(5) << std::endl;
    std::cout<<iteration_sum(5) << std::endl;
    std::cout<<formula_sum(5);
    return 0;
}