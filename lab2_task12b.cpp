#include <iostream> 
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
    m = 0;
    if (a%2==0)
        m = m+1;
    if (b%2==0)
        m = m+1;
    if (c%2==0)
        m = m+1;
    cout << "Kolichestvo chetnyh chisel: " << m;
    return 0;
}