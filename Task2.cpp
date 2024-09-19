#include<iostream>

void pointer(int * pi)
{
    for(int i = 0;i < 5;++i)
    {
        int temp = *(pi + i);
        *(pi + i) = *(pi + 9 - i);
        *(pi + 9 - i) = temp;        
    }
    for(int i = 0;i < 10;++i)
    {
        std::cout<<*(pi + i)<<" ";
    }
}

int main()
{
    int numbers[10] {1,2,3,4,5,6,7,8,9,10};       
    pointer(numbers);
}