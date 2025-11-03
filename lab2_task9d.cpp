#include <iostream> 
using namespace std; 
int main()
{
    double x,y;
    cout << "Vvedite koordinaty: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if ((y <= -2*x +2) && (y >= 0) && (x >= 0))
        cout << "Prinadlezhit";
    else {
        cout << "Ne prinadlezhit";
    }
    return 0;
}