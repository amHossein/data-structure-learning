#include <iostream>

int nCr(int n, int r)
{
    if(r == 0 || r == n)    return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main()
{
    std::cout<<nCr(5,0)<<std::endl;
    std::cout<<nCr(5,1)<<std::endl;
    std::cout<<nCr(5,2)<<std::endl;
    std::cout<<nCr(5,3)<<std::endl;
    std::cout<<nCr(5,4)<<std::endl;
    std::cout<<nCr(5,5)<<std::endl;
    return 0;
}