#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "for 'z = (x+10) / 3y' enter x,y in order." << endl << "x first" << endl;
    cin >> x;
    cout << "now y" << endl;
    cin >> y;
    
    z = (x + 10) / (3 * y);
    cout << "z = " << z << endl;
    
    return 0;
}
