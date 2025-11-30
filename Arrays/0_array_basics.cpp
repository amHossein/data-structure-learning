#include <iostream>


int main()
{
    // declare only     -> result is garbage values
    int Array[5];
    for (int x : Array){
        printf("%d ",x);
    }
    std::cout<<std::endl;


    //declare and initialize all values
    int Initialized[5] = {5,10,15,20,25};
    for (int x : Initialized){
        printf("%d ",x);
    }
    std::cout<<std::endl;
    

    // declare and initialize some values
    int Half[5] = {1,2,3};
    for (int x : Half){
        printf("%d ",x);
    }
    std::cout<<std::endl;


    // initial only one zero
    int Zeros[5] = {0};
    for (int x: Zeros){
        printf("%d ",x);
    }
    std::cout<<std::endl;


    // declare non-defined size array and initial values as much as needed
    // array length will be same as the count of initialized values 
    int NoLimit[] = {10,20,30,40,50,60,70,80};
    for (int x: NoLimit){
        printf("%d ",x);
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    

    
    
    // Access Array Elements
    printf("%d \n", NoLimit[0]);
    printf("%d \n", 0[NoLimit]);
    printf("%d \n", *(NoLimit+0));
    // NoLimit[0] == 0[NoLimit] = *(NoLimit+0)
    printf("%d \n", static_cast<int>(std::size(NoLimit)));
    printf("%d \n", static_cast<int>((sizeof(NoLimit) / sizeof(NoLimit[0])))); 
    // std::size(NoLimit) == (sizeof(NoLimit) / sizeof(NoLimit[0])

    int lenOfNoLimit = std::size(NoLimit);
    for(int i=0; i<lenOfNoLimit ; i++){
        printf("%d : %p\n",i[NoLimit],&NoLimit[i]); // %p for pointer value
    }
    
    
    return 0;
}