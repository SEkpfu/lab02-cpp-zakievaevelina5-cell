#include <iostream> 
using namespace std; 
int main()
{
    double x,y,z;
    cout << "Vvedite storony: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    if ((x+y > z) || (y+z > x) || (z+x > y))
        cout << "Suschectvuet";
    else {
        cout << "Ne suschestvuet";
    }
    return 0;
}