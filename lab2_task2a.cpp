#include <iostream> 

using namespace std; 

int main() 
{ 
    setlocale(0, "");
    double a;
    cout << "Vvedite chislo: \n";
    cin >> a;
    if (a > 0)
        cout << "Polozhitelnoe";
    else {
        if (a < 0)
            cout << "Otricatelnoe";
        else {
            cout << "Ravno 0";
        }
    }
    return 0;
}
