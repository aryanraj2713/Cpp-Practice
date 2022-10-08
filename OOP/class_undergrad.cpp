#include <iostream>
using namespace std;
class degree
{
public:
    degree()
    {
        cout << "I got a degree." << endl;
    }
};
class undergraduate : public degree
{
public:
    undergraduate()
    {
        cout << "I am an Undergraduate" << endl;
    }
};
class postgraduate : public degree
{
public:
    postgraduate()
    {
        cout << "I am a Postgraduate";
    }
};
int main()
{
    undergraduate u;
    postgraduate p;
}