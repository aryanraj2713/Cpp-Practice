#include<iostream>
using namespace std;

int main()
{
    int a = 10 , b , c ;
    cin >> b ;
    try{
        if(b==0){
            throw 55 ;
        }
        else{
            c = a/b ;
            cout<< c ;
        }
    }
    catch(int i){
        cout << "division by 0";
    }
    return 0;
}
