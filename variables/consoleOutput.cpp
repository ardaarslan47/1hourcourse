# include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 12;
    cout << "x = " << x << endl
         << "y = " << y << endl;
    
    // exercise
    double sales = 95.000;
    const double country_tax_rate = 0.04;
    const double state_tax_rate = 0.02;
    
    cout << "sales = " << sales << "$" << endl
    << "country tax = " << country_tax_rate * sales << "$" << endl
    << "state tax = " << state_tax_rate * sales << "$" << endl;
    
    return 0;
}
