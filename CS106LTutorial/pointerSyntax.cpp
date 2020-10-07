#include <iostream>
#include <type_traits>
int main () 
{
    int * x1, x2;
    std::cout<<"x1 is " << typeid(*x1).name() << std::endl;
}