#include <iostream>


int power_v1(int m, int n)
{
    if(n==0)
        return 1;
    return power_v1(m,n-1)*m;

}
int power_v2(int m, int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power_v2(m*m, n/2);
    return m*power_v2(m*m,(n-1)/2);

}
int power_loop(int m, int n)
{
    if(n==0)
        return 1;

    int result = 1;
    for(int i = n; i>=1; i=i/2){
        if(i%2==1)
            result *= m;
        m = m*m;            
    }
    return result;
}
int main()
{

    std::cout<<power_v1(2,9) << std::endl;
    std::cout<<power_v2(2,9) << std::endl;
    std::cout<<power_loop(2,9);
    return 0;
}