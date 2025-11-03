#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double x;
    cout << "Vvedite znachenie x: " << "\nx = ";
    cin >> x;
    if (x <= 5) {
        cout << "m = " << M_PI*x - (M_PI/2);}
    else {
        if (x>5 && x<15) {
            cout << "m = " << x*x + 10;}
        else {
            cout << "m = " << (2*sqrt(x+1))/x;}
    
    }
    return 0;
}
    