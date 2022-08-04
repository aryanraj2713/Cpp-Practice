#include<iostream>
using namespace std;

int main()
{
    char key;

    cin>>key;

    switch (key)
    {
    case  'a':
        cout << "Hello" << endl;
        break;

    case 'b':
        cout << "salut" << endl;
        break;

    case 'c':
        cout << "Ciao" << endl;
        break;

    case 'd':
        cout << "Namaste" << endl;
        break;

    
    default:
        cout << "Learning more" << endl;
        break;
    }

    return 0;
}