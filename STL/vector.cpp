#include<iostream>
#include <vector>
using namespace std;

int main()
{   
    vector <int> vec ;
    cout << "Initial Capacity = " << vec.capacity() << endl ;//initial sz should be 0

    vec.push_back(5) ;
    cout << "Capacity = " << vec.capacity() << endl ;   // 1


    vec.push_back(10) ;
    cout << "Capacity = " << vec.capacity() << endl ; //2

    vec.push_back(10) ;
    cout << "Capacity = " << vec.capacity() << endl ; //4 (doubled dynamically)



    cout << "at_index-2 = " << vec.at(2) <<endl ; 
    
    cout << "front = " << vec.front() << endl ;
    cout << "back = " << vec.back() << endl ;
    cout << "size = " << vec.size() << endl ;
    //pop_back exists
    

    return 0;

    
}