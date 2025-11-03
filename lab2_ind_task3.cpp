#include <iostream>

using namespace std;

int main ()
{
    setlocale (0, "");
    double x,y;
    cout << "Vvedite koordinaty: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x >= 0 && x <= 3 && x*x + y*y <= 36 )
        cout << "Popala";
        else {
            if (y <= 2*x +6 && y >= 0 && x <=0)
        cout << "Popala";
    else {
        cout << "Ne popala";
    }
        }
    return 0;
}
