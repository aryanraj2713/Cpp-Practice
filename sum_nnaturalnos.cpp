#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum;
    sum = 0;
    for(int flag=1;flag<=n;flag++){
        sum = flag + sum ;

    }

    cout<<sum;
    return 0;
}