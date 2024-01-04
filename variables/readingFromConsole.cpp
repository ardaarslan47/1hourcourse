#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a value: ";
    int value;
    cin >> value;
    
    cout << value << endl;
    
    //celcius to fahrenheit
    cout << "Enter celcius to convert to fahrenheit: ";
    double celcius;
    cin >> celcius;
    
    double fahrenheit = celcius * (9.0/5) + 32;
    cout << celcius << " celcius = " << fahrenheit << " fahrenheit";
    
    return 0;
}
