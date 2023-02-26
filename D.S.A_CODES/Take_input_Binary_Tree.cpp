#include"Node_class_OF_Binary_tree.cpp"
Binary_Tree_Node* takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    Binary_Tree_Node* root= new Binary_Tree_Node(rootData);
    Binary_Tree_Node* leftchild=takeInput();
    Binary_Tree_Node* rightchild=takeInput();
    root->left=leftchild;
    root->right=rightchild;
     return root;
}