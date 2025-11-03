#include <iostream> 
using namespace std; 
int main()
{
    double x,y,z,m;
    cout << "Vvedite storony: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    if ((x+y > z) && (y+z > x) && (z+x > y))
    {
        if ((x == y && y != z) || (y == z && z != x) || (z == x && x != y))
            cout << "Ravnobedrenniy";
        else {
            if ((x*x + y*y == z*z) || (y*y + z*z == x*x) || (z*z + x*x == y*y))
                cout << "Pryamoygolniy";
            else{ 
                if ( x == y == z)
                    cout << "Ravnostoronniy";
                else {
                    cout << "Ne suschestvuet";
                }
            }
        }

    }
    return 0;
}