#include<iostream>
using namespace std;
class Binary_Tree_Node{
    public:
    int data;
    Binary_Tree_Node* left;
    Binary_Tree_Node* right;
    Binary_Tree_Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~Binary_Tree_Node(){
        delete left;
        delete right;
    }

};

