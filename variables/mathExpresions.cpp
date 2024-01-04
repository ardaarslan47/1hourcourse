#include <iostream>

int main ()
{
    int x = 10;
    int y = 3;
    double v = x / y;
    
    std::cout << v;
    
    x = x + 5;
    x++;
    std::cout << x;
    x--;
    std::cout << x << std::endl;
    
    //pre-post increment
    
    int z = 10;
    int n;
    
    n = z++; // n = 11, z = 10
    std::cout << "z = " << z << std::endl << "n = " << n << std::endl;
    
    z = 10;
    
    n = ++z; // n = 11, z = 11
    std::cout << "z = " << z << std::endl << "n = " << n << std::endl;
    
    return 0;
}
