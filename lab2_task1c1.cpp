#include <iostream> 
using namespace std; 
int main() 
{ 
    setlocale(0, ""); 
    double a1, b1, a2, b2, a3, b3, s1, s2, s3; 
    cout << "Vvedite storony pervogo pryamougolnika: \n"; 
    cout << "a1= ";  cin >> a1; 
    cout << "b1= ";  cin >> b1; 
    cout << "Vvedite storony vtorogo pryamougolnika: \n"; 
    cout << "a2= ";  cin >> a2; 
    cout << "b2= ";  cin >> b2; 
    cout << "Vvedite storony tretyego pryamougolnika: \n"; 
    cout << "a3= ";  cin >> a3; 
    cout << "b3= ";  cin >> b3;
    s1=a1*b1;
    s2=a2*b2;
    s3=a3*b3;
    if (s1>s2 && s1>s3){
        cout << "Max ploschad y pervogo, s= " << s1;}
    else {
        if (s2>s3){
        cout << "Max ploschad y vtorogo, s= " << s2;}
        else {
            cout << "Max ploschad y tretyego, s= " << s3;
        }
    }
return 0;
}