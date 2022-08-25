#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n ;
    int arr[n];
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

    //min max logic part
    int minNo = MIN_INT;  

    int maxNo = MAX_INT ;  

     for(int i = 0 ; i < n ; i++){
        if(maxNo > arr[i]){
            maxNo = arr[i] ;
        }
        if(minNo < arr[i]){
            minNo = arr[i] ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] ;
    }

    return 0;
}