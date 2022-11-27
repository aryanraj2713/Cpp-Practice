

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2 ; i<=sqrt(num) ; i++){
        if( num%2==0 ){
            return false;
        }

    }
    return true;                      
}

int main()
{
    int a , b ;
    cin >> a >> b ;
    for(int i = a ; i <= b ; i++){
        if(isPrime(i)==true){           .     
            cout << i << endl ;
        }
    }
    return 0;
}