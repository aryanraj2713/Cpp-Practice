#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2 ; i<=sqrt(num) ; i++){
        if( num%2==0 ){
            return false;
        }

    }
    return true;                        //If the loop competes itself then num is prime.
}

int main()
{
    int a , b ;
    cin >> a >> b ;
    for(int i = a ; i <= b ; i++){
        if(isPrime(i)==true){           //We dont actually need mention true, it will still work.     
            cout << i << endl ;
        }
    }
    return 0;
}