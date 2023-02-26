#include<iostream>
#include<vector>
#include"printing_tree.cpp"
using namespace std;
class TreeNode{
    public:
    int data;
    vector<TreeNode * > children;
    TreeNode(int data){
        this->data=data;
    }


};

TreeNode* take_input(){
    int rootData;
    cout<<"enter data "<<endl;
    cin>>rootData;
    TreeNode* root=new TreeNode(rootData);
    int n;
    cout<<"number of children of root "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode* child=take_input();
        root->children.push_back(child);
    }
    return root;
}
void print_tree(TreeNode* roott){
    cout<<roott->data<<":";
    for(int i=0;i<roott->children.size();i++){
        cout<<roott->children[i]->data<<",";

    }
    cout<<endl;
    for(int i=0;i<roott->children.size();i++){
        print_tree(roott->children[i]);
    }
}
int main(){
    TreeNode* root= take_input();
    print_tree(root);
}
