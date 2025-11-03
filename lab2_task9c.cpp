#include <iostream> 
using namespace std; 
int main()
{
    double x,y;
    cout << "Vvedite koordinaty: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (((x*x + y*y >= 9) && (x*x + y*y <=36)) && (x>=0))
        cout << "Prinadlezhit";
    else {
        cout << "Ne prinadlezhit";
    }
    return 0;
}