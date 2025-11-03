#include <iostream> 
using namespace std; 
int main()
{
    int a,b,c,x,y,z,f;
    cout << " Vvedite daty rozhdeniya: " << "\nDen: ";
    cin >> a;
    cout << "Nomer mesyatsa: ";
    cin >> b;
    cout << "God: ";
    cin >> c;
    cout << " Vvedite tekuschuyu daty: " << "\nDen: ";
    cin >> x;
    cout << "Nomer mesyatsa: ";
    cin >> y;
    cout << "God: ";
    cin >> z;
    f = z - c;
    if (b - y > 0 || (b == y && a > z) )
        f = f - 1;
    if (f%10 == 1)
        cout << "Vam "<< f << " god";
    else {
        if (f%10 == 2 || f%10 == 3 || f%10 == 4)
            cout << "Vam "<< f << " goda";
        else {
            cout << "Vam "<< f << " let";
        }
    }
    return 0;
}