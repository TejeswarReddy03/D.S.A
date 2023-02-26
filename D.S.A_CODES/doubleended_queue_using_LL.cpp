/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};
class Deque {
    // Complete this class
    Node*head;
    Node*tail;
    int size;
    int capacity;
    public:
    Deque(int s){
        head=NULL;
        tail=NULL;
        size = 0;
        capacity=s;
    }
    void insertFront(int element){
        if(size==capacity){
            cout<<"-1";
            return;
        }
      if (head == NULL) {
        Node *n = new Node(element);
        head = n;
        tail = n;
        size++;
      }
      
    else {
      Node *n = new Node(element);
      Node* temp1=head;
      head=n;
      head->next=temp1;
      tail = n;
      size++;
      }
    }
    void insertRear(int element){
      if (size == capacity) {
        cout << "-1";
        return;
      }
        if(head==NULL){
          Node *n = new Node(element);
          head = n;
          tail = n;
          size++;
        }
        else{
          Node *n = new Node(element);
          
          tail->next = n;
          tail=n;
          size++;
        }
    }
    void deleteFront(){
        // cout<<"hi1";
      if (head == NULL) {
          cout<<"-1"<<endl;
          
      }
      size--;
        head=head->next;

    }
    void deleteRear(){
       
        
        if(head==NULL){
           cout<<"-1"<<endl;
           
        }
        size--;
        Node* tempp=head;
        while (tempp->next->next != NULL) {
         tempp=tempp->next;
        }
    tail=tempp;
    tail->next=NULL;
    }
    int getFront(){
    //   cout << "hi2";
      if (head == NULL) {
        return -1;
        }
        return head->data;
    }
    int getRear(){
    //   cout << "hi3";
      if (head == NULL) {
        return -1;
        }
        return tail->data;
    }
};
