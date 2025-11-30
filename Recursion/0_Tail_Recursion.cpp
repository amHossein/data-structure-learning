#include <iostream> 

// "Tail Recursion" : when last statement the function is calling itself
void func(int n)
{
    if(n>0)
    {
        std::cout<<n<<std::endl;
        func(n-1);
    }
}

int main()
{
    int x = 3;
    
    func(x);

    return 0;
}