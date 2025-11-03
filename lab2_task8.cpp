#include <iostream> 
using namespace std; 
int main()
{
    int x,y;
    cout << "Vvedite koordinaty: " << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x*x + y*y <= 4)
        cout << "10 ochkov";
    else {
        if (4 < x*x + y*y <= 16)
            cout << "5 ochkov";
        else {
            cout << "0 ochkov";
        }
    }
    return 0;
}