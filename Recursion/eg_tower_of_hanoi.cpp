#include <iostream>

void ToH(int disks, char A, char B, char C)
{
    if(disks > 0)
    {
        ToH(disks-1, A, C, B);
        printf("(%c, %c)\n",A,C);
        ToH(disks-1, B, A, C);
    }
}

int main()
{
    ToH(1,'A','B','C');
    std::cout<<std::endl;
    ToH(3,'A','B','C');
    return 0;
}