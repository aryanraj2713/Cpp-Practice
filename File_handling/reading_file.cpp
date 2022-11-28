#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    string myText ;
    //read from file
    ifstream MyReadFile("Aryan_raj.txt");

    //use while loop to read file line by line
    while (getline(MyReadFile, myText))
    {
        //output the text from file
        cout << myText << endl;
    }

    MyReadFile.close();

    return 0;
}


