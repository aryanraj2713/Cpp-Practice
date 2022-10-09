#include<iostream>
using namespace std;

int main()
{
    int a = 10 ;
    int *ap ;
    ap = &a ;
    cout << &a << endl ;
    cout << ap << endl ;
    cout << *ap << endl ;
    return 0;
}