#include<iostream>
using namespace std;

class Node{
    int data ;
    struct Node* left ;
    struct Node* right ;

    //constructor
    Node(int val){
        data = val ;
        left = NULL ;
        right = NULL ;
    }
}

int main()
{   
    struct Node* root = new Node(1) ;
    root -> right = new Node(2) ;
    root -> left = new Node(3) ;
    //basic tree-IWT to expand my treeeee
    root -> left -> left = new Node(5);
    root -> left -> right = new Node (6);

    return 0;
}