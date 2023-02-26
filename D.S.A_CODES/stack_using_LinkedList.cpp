#include<iostream>
using namespace std;
class Node{
     public:
    Node* next;
    int data;
   
    Node(int value){
        data=value;
    }
};
class Stack_using_LinkedList{
    Node*head;
    Node*tail;
    int next_index;
    public:
    Stack_using_LinkedList(){
        head=NULL;
        tail=NULL;
        next_index=0;
    }
    void push(int element){
        Node* newNode=new Node(element);
        // Node*tail=NULL;
        if(head==NULL){
            head=newNode;
            next_index+=1;
            tail=head;
        }
        else{
            
            tail->next=newNode;
            tail=tail->next;
            next_index+=1;
        }
    }
    int size(){
        return next_index;
    }
    int top(){
        if(next_index==0){
            return -1;
        }
        else{
        return tail->data;
        }
    }
    //this pop function takes O(n) time.
int pop(){
  
    if(next_index==1){
        head=NULL;
        tail=NULL;
        next_index--;
        return -1;

    }
    if (head == NULL){
        return -1;
    }
    else if (head == tail){
        int kk = head->data;
        delete head;
        head = NULL;
        tail = NULL;
        next_index--;
        return kk;
    }
    else{
        Node* temp = head;
        while (temp->next != tail){
            temp = temp->next;
        }
        int kk = tail->data;
        delete tail;
        tail = temp;
        tail->next = NULL;
        next_index--;
        return kk;
    }
}



    bool isempty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    Stack_using_LinkedList s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
   cout<<s.top();

    
}