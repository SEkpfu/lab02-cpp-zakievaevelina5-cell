#include <iostream> 

using namespace std; 

int main() 
{ 
    setlocale(0, "");
    int a, m;
    cout << "Vvedite chislo: ";
    cin >> a;
    m = a % 2;
    if (m == 0)
        cout << "Chetnoe";
    else {
        cout << "Nechetnoe";
    return 0;
    }
}