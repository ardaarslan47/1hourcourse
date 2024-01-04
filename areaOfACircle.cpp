#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 1- declaring variables and constants
    const double PI = 3.14;
    double radius, area;
    
    // 2- asking and receiving neccesery values
    cout << "Enter the circle's radius: ";
    cin >> radius;
    
    // 3- calculations
    area = PI * pow(radius, 2);
    
    // 4- output
    cout << "Area = " << area << endl;
    
    return 0;
}
