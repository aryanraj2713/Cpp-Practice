#include<iostream>
using namespace std;
template <class T>
class multiply{
    public:
    T a ;
    T b ;
    T domuli(T c , T d){
        return c*d ;
    }

};

int main()
{   
    multiply<int> m1 ;
    multiply<float> m2 ;

    cin >> m1.a >> m1.b ;
    cout << m1.domuli(m1.a,m1.b) << endl;

    cin >> m2.a >> m2.b ;
    cout << m2.domuli(m2.a , m2.b) << endl ;

    return 0;
}