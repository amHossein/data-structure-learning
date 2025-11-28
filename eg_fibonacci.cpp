#include<iostream>


int fibonacci_iter(int n)
{
    int t0=0, t1=1, sum=0, i;

    if(n<=1) return n;

    for(i=2;i<=n;i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }

    return sum;
}

int fibonacci(int n)
{
    if(n<=1) return n;
    return fibonacci(n-2)+fibonacci(n-1);
}


int FibArray[10];
int fibonacci_memoization(int n)
{
    if(n<=1)
    {
        FibArray[n]=n; 
        return n;
    }
    else
    {
        if(FibArray[n-2]==-1)
            FibArray[n-2] = fibonacci_memoization(n-2);
        if(FibArray[n-1]==-1)
            FibArray[n-1] = fibonacci_memoization(n-1);

        return FibArray[n-2] + FibArray[n-1];
    }
}
int main()
{
    for(int i=0; i<10; i++){
        FibArray[i] = -1;
    }
    std::cout << fibonacci_iter(10) << std::endl;
    std::cout << fibonacci(10) << std::endl;
    std::cout << fibonacci_memoization(10);
    return 0;
}