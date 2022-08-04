#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"Greatest integer:"<<a;
        }
        else{
            cout<<"Greatest integer:"<<c;
        }
    }
    else{
        cout<<"Greatest integer:"<<b;
    }
    
    return 0;
}