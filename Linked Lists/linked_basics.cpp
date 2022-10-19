#include<iostream>
using namespace std;

//defining node
class node{
    public:
    int data ;
    node *next ;

    node(int val){
        data = val ;
        next = NULL ;
    }
};
//insert at tail
void insTail(node * &head, int val){

    node *n = new node(val) ;
    node * temp = head ;
    while (temp-> next !=NULL)
    {
        temp = next ->n ;
    }
    
};


void display(node * head){
    while (temp !=NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next ;

    }
    cout <<endl;
}

void insHead()



int main()
{
    
    return 0;
}