#include<iostream>

#include<fstream>
using namespace std;

int main()
{ 
    //create and open file
    ofstream myfile("Aryan_raj.txt");

    //write to file
    myfile << "This is a line.\n" << "This is another line.\n";

    //close file
    myfile.close();
    
    return 0;
}