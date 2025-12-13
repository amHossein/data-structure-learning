#include <iostream>


int main()
{
    // Static Array
    int stack_array[5] = {0}; // inside Stack

    // Dynamic Array
    int *heap_pointer = new int[5]; // create pointer and allocate Heap memory 
    // it's just a pointer pointing to an array (heap_pointer is not an Array)
    heap_pointer[0] = 0;
    heap_pointer[1] = 0;
    heap_pointer[2] = 0;
    heap_pointer[3] = 0;
    heap_pointer[4] = 0;

    for (int element : stack_array) std::cout<<element<<" ";
    std::cout<<std::endl;
    for (int i=0; i<5; i++) std::cout<<heap_pointer[i]<<" ";

    return 0;
}