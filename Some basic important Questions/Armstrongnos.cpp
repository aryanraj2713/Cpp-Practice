//similar to reversing no.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int orig_n = n;
    int sum = 0;
    while(n>0){
        int lastd = n%10;
        sum =+ pow(lastd,3);
        n= n/10;
    }
    

    if(sum == orig_n){
        cout<<"Armstrong no."<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }

    return 0;
}