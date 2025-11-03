#include <iostream> 
using namespace std; 
int main() 
{ 
    setlocale(0, ""); 
    int  dM, dW; 
    cout << "Vvedite daty: "; 
    cout << "\nDen mesyatsa: ";   
    cin >> dM; 
    cout << "\nNomer dnya nedeli: ";   
    cin >> dW; 
    if (13 == dM) 
        if (5 == dW || 2 == dW) 
        cout << "\nNeydachnyi den ";
return 0;
}
