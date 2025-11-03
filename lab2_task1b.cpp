#include <iostream> 
using namespace std; 
int main() 
{ 
    setlocale(0, ""); 
    double a1, b1, a2, b2; 
    cout << "Vvedite storony pervogo pryamougolnika: \n"; 
    cout << "a1= ";  cin >> a1; 
    cout << "b1= ";  cin >> b1; 
    cout << "Vvedite storony vtorogo pryamougolnika: \n"; 
    cout << "a2= ";  cin >> a2; 
    cout << "b2= ";  cin >> b2; 
     
    double s1, s2; 
    s1 = a1 * b1; 
    s2 = a2 * b2; 
 
    if (s1 > s2) 
        cout << "max ploschad y pervogo,  s= " << s1; 
    else {
        if (s2>s1)
        cout << "max ploschad y vtorogo, s= " << s2;
        else {
            cout << "ploschadi ravny, s= " << s1;
        }
    }
 
    return 0; 
}