#include <iostream> 
using namespace std; 
int main() 
{ 
    setlocale(0, ""); 
    double a,b;
    char m;
    cout << "Vvedite chisla: " << "\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Vvedite znak operacii: \n";
    cin >> m;
    switch (m) {
        case '+': cout << "a+b = " << a + b; break;
        case '-': cout << "a-b = " << a - b; break; 
        case '*': cout << "a*b = " << a * b; break; 
    }
    return 0;
}