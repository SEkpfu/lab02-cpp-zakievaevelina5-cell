#include <iostream>

using namespace std;

int main ()
{
    int a;
    cout << "Vvedite kol-vo shishek: " << "\na = ";
    cin >> a;
    if (a%10 == 1 && a%100 != 11) {
        cout << "Belka siela " << a << " shishky";}
    else {
        if ((a%10==2 || a%10==3 || a%10==4) && (a%100 != 12 && a%100 != 13 && a%100 != 14)){
            cout << "Belka siela " << a << " shishki";
        }
        else {
            cout << "Belka siela " << a << " shishek";
        }
    }
    return 0;
}