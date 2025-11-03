#include <iostream> 
using namespace std; 
int main() 
{ 
    setlocale(0, "");
    double x,y,z,a,b;
    cout << "Vvedite razmery kirpicha: " << "\nDlina kirpicha = ";
    cin >> x;
    cout << "Shirina kirpicha = ";
    cin >> y;
    cout << "Visota kirpicha = ";
    cin >> z;
    cout << "Vvedite razmery otverstiya: " << "\nDlina otverstiya = ";
    cin >> a;
    cout << "Shirina otverstiya = ";
    cin >> b;
    if ((x<a && y<b) || (y<a && x<b))
        cout << "Proydet";
    else {
        if ((y<a && z<b) || (z<a && y<b))
            cout << "Proydet";
            else {
                if ((z<a && x<b) || (x<a && z<b))
                    cout << "Proydet";
                else {
                    cout << "Ne proydet";
                }
            }
    }
    return 0;
}