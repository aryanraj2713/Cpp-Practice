#include <bits/stdc++.h>
using namespace std;

int main() {
    //brute
    int arr[] = {2,3,4,6,7,8};
    int largest = arr[0];
    int n = (sizeof(arr)/sizeof(arr[0])-1);
    for(int i=0 ; i <= n ;i++){
        if(arr[i]>largest){  //mistake point
            largest = arr[i];
        }
    }
  
    cout << largest ;
  

    return 0;
}