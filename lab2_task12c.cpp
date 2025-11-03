#include <iostream> 
#include <algorithm>
using namespace std; 
int main()
{
    int a,b,c,k;
    cout << "Vvedite tri chisla: " << "\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    k = a+b+c;
    k = k - min({a,b,c}) - max({a,b,c});
    cout << "Srednee chislo: " << k;
    return 0;
}
