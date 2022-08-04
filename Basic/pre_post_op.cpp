#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int j=2;
    int k;
    //post increment works only when next statement is 
    //executed.

    //1  //2  //1    //2   //3   //4
    k= i + j + i++ + j++ + ++i + ++j ;
    
    cout<<k<<endl;


    int a = 0;
    int b;
        //1  //2   //2   //3
    b = ++a + a++ + a++ + a++;
    cout <<b<< endl;
    return 0;
}