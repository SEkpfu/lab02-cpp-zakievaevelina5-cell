#include <iostream> 
using namespace std; 
int main() 
{ 
    setlocale(0, "");
    double r,a,b,z,c;
    cout << "Vvedite radius torta: " << "\nr = ";
    cin >> r;
    cout << "Vvedite razmery korobki: " << "\na = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "Vvedite vysoty torta: " << "\nz = ";
    cin >> z;
    cout << "Vvedite vysoty korobki: " << "\nc = ";
    cin >> c;
    if ((r < a) && (r < b))
        cout << "Pomestitsa po razmeram";
    else {
        cout << "Ne Pomestitsa po razmeram";
    }
    if (z < c)
        cout << "\nPomestitsa po vysote";
    else {
        cout << "\nNe pomestitsa po vysote";
    }
    return 0;
}