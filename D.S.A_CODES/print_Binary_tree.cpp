#include"Node_class_OF_Binary_tree.cpp"
void print_Binary_tree(Binary_Tree_Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print_Binary_tree(root->left);
    print_Binary_tree(root->right);

}
int main(){
    Binary_Tree_Node* root=new Binary_Tree_Node(1);
    Binary_Tree_Node* node1=new Binary_Tree_Node(2);
    Binary_Tree_Node* node2=new Binary_Tree_Node(3);
    root->left=node1;
    root->right=node2;
print_Binary_tree(root);
}