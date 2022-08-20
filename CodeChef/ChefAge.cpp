#include <iostream>
using namespace std;

int main() {
	int T , A , X , Y ;
	cin >> T ;
	for(int i =1 ; i<T ; i++){
	    cin >> X >> Y >> A ;
	    if(A>=X && A<Y){
	        cout << "YES";
	    }
	    else{
	        cout<< "NO";
	    }
	}
	return 0;
}