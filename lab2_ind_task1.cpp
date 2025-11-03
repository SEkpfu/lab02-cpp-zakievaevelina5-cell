#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    setlocale (0, "");
    double f,t,ro,rv,s,p;
    int m;
    cout << "Vvedite nomer elementa: ";
    cin >> m;
    cout << "Vvedite znachenie elementa: ";
    cin >> f;
    switch (m) {
        case (1): cout << "ro=" << f << "\nrv=" << (sqrt(3)/2)*f << "\ns=" << (3*sqrt(3)/2)*f*f << "\np=" << 6*f; break;
        case (2): cout << "t=" << f << "\nrv=" << (sqrt(3)/2)*f << "\ns=" << (3*sqrt(3)/2)*f*f << "\np=" << 6*f; break;
        case (3): cout << "t=" << (2*f)/sqrt(3) << "\nro=" << (2*f)/sqrt(3) << "\ns=" << 2*sqrt(3)*f*f << "\np=" << 4*sqrt(3)*f; break;
        case (4): cout << "t=" << sqrt(2*f/(3*sqrt(3))) << "\nro=" << sqrt(2*f/(3*sqrt(3))) << "\nrv=" << sqrt(f/(2*sqrt(3))) << "\np=" << 4*sqrt(3)*sqrt(f/(2*sqrt(3))); break;
        case (5): cout << "t=" << f/6 << "\nro=" << f/6 << "\nrv=" << f/(4*sqrt(3)) << "\ns=" << f*f/(8*sqrt(3)); break;
    }
    return 0;
}