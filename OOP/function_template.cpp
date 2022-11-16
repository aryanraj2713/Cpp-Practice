#include <iostream>
using namespace std;
template < typename T,typename  U>
T multiply(T a, U b)
{
    return a * b ;
}

int main()
{
    int a, b;
    float x, y;
    cin >> a >> b;
    cin >> x >> y;
    cout <<multiply(a, b) <<endl5;
    cout << multiply(x, y);
    multiply(a, x);
    return 0;
}