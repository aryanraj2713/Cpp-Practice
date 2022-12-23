#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v ;
    for (int i = 0; i < 500; i++)
    {
        v.push_back(i);
    }

    for (int i = 0; i < 500; i++)
    {
        cout << v[i] << endl;
    }
    
    
    return 0;
}