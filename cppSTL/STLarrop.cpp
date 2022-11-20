#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    array<int , 5 >  a = {1 ,2 ,3,4 ,5} ;
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] <<endl;
    }

    cout <<"Element at "<< a.at(2) << endl ;
    cout <<"Element at front "<< a.front() << endl ;
    cout <<"Element at back"<< a.back() << endl ;
    cout <<"Element are empty "<< a.empty() << endl ;

    return 0;
}


