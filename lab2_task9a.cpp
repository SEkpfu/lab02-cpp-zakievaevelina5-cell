#include <iostream> 
using namespace std; 
int main()
{
    double x,y;
    cout << "Vvedite koordinaty: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if ((x >= -2 && x <= 0) && (y >= 0 && y <= 1))
        cout << "Prinadlezhit";
    else {
        cout << "Ne prinadlezhit";
    }
    return 0;
}