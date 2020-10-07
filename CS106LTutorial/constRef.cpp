#include <iostream>

void test(const int & ref);

int main() 
{
    int para = 5;
    // const int & ref = para;
    test(para);
    std::cout << "para is: " << para << std::endl;
    return 0;
}
void test(const int & ref)
{
    int a = ref * 2;
    std::cout<<"a is: " << a << "," << "ref is: " << ref << std::endl;
}