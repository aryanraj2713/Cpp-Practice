#include <iostream>
using namespace std;
class Area
{
public:
    void output(int l, int b)
    {
        cout << "Area of Rectangle is = " << l * b << endl;
    }
    void output(int a)
    {
        cout << "Area of Square is = " << a * a << endl;
    }
};
int main()
{
    Area obj;
    obj.output(5, 6);
    obj.output(5);
}