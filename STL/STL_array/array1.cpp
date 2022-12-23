#include<iostream>
#include <array>
using namespace std;

int main()
{
    //simple C++ array
    int simple_array[4] = {1 , 2 , 3 , 4};

    // stl array
    array<int,4> arr = {1 ,2 , 3, 4};
    int size = arr.size(); // finding size
    for(int i = 0; i<size ; i++){
        cout << arr[i] << endl ;
    }

    //at operation
    int at_op = arr.at(2);
    cout << "index 2 = " << at_op << endl ;

    
    return 0;
}