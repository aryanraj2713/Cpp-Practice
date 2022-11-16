#include<iostream>
using namespace std;

class myException:exception{

};
class myException2:public myException{

};

int main()
{   
    try{
        throw myException() ;
    }
    catch(...){
        cout << "myException";
    }
    
    return 0;
}