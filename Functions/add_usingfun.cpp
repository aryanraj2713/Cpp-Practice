#include<iostream>
using namespace std;

int add( int n1, int n2 ){
    int sum = n1 + n2 ;
    return sum;
}
int main()
{
    int a ;
    int b ;
    int sum ;
    cin >>a >> b ;
    sum = add(a,b) ;
    cout << "Sum Is :" << sum << endl;
    
    return 0 ;
}