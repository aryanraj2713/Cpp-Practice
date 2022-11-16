#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b != a)
        {
            float div = (float)a / b;

            if (div < 0)

                throw ‘e’;

            cout << div;
        }
        else

            throw b;
    }
    catch (int i)
    {
        cout <<“exception caught”;
    }
    catch (int i)
    {

        cout <<“exception caught : Division by zero”;
    }
    catch (char st)
    {

        cout << “exception caught : Division is less than 1”;
    }
    catch (…)
    {

        cout << “Exception : unknown”;
    }
}