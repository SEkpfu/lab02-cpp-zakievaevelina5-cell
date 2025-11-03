#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
    int a,b,c,m;
    cout << "Vvedite tri chisla: " << "\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (min({a,b,c}) == a)
        cout << "1";
    if (min({a,b,c}) == b)
        cout << "2";
    if (min({a,b,c}) == c)
        cout << "3";
    return 0;
}