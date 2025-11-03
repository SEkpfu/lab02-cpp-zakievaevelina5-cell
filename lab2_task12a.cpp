#include <iostream> 
using namespace std; 
int main()
{
    int a,b,c,s;
    cout << "Vvedite tri chisla: " << "\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    s = 0;
    if ( a > 10 )
        s = s + a;
    if ( b > 10 )
        s = s + b;
    if ( c > 10 )
        s = s + c;
    cout << "s = " << s;
    return 0;
}