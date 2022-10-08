#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a ;

    //printing to get idea of how pointer works- :?
    cout <<a <<endl;
    cout <<p <<endl ;
    cout <<&a <<endl;
    cout <<p <<endl ;
    cout <<*p <<endl ;
    return 0;
}