#include<iostream>
using namespace std;

class cube {
    public :
    int x ;


    cube()
    {
        x = 10;
    }
} ;

int main()
{
    cube c;
    cout << c.x;
    return 0;
}