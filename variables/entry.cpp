#include <iostream>

int main()
{
    int file_size = 100;
    double sales = 9.99;
    
    int a, b;
    a = 1;
    b = 2;
    
    // swap a and b
    int c;
    c = a;
    a = b;
    b = c;
    
    std::cout << a << " " << b;
    
    return 0;
}
