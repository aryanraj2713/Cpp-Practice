#include <iostream>
using namespace std;

int main() {
	int T , X , Y ;
	cin >> T ;
	for(int i =0 ; i <= T ; ++i){
	    cin >> X >> Y ;
	    if(X>Y){
	        cout << "FIRST"<<endl;
	    }
	    else if(Y>X){
	        cout << "SECOND"<<endl;
	    }
	    else{
	        cout << "ANY"<<endl;
	    }
	        
	    }
	
	return 0;
}