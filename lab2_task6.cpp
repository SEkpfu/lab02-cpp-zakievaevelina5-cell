#include <iostream> 
using namespace std; 
int main() 
{ 
setlocale(0, ""); 
    int x;  
    cout << "Vvedite svoyu otsenky: ";  
    cin >> x; 
    switch (x) { 
        case 5: cout << "Otlichno"; break;
        case 4: cout << "Horosho"; 
        case 3: cout << "Ydovletvoritelno"; break;
        case 2: 
        case 1: cout << "Ploho "; break;
        default: cout << "Nevernye dannye "; 
 } 
 
 return 0; 
}