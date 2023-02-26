 #include<iostream>
 using namespace std;
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};


class Queue {
	Node* head;
	Node* tail;
	int size;
   public:
    Queue() {
		head=NULL;
		tail=NULL;
		size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		return size;	
}

    bool isEmpty() {
		return size==0;
	}

    void enqueue(int data) {
      if (size == 0) {
        Node *n = new Node(data);
        head = n;
        tail = n;
		size++;
      }
	  else{
        Node *n = new Node(data);
		
        tail->next=n;
		tail=n;
		size++;
		  }
        }

    int dequeue() {
		if(size==0){
			return -1;
		}
		int k=head->data;
		head=head->next;
		size--;
		return k;
    }

    int front() {
		if(size==0){
			return -1;
		}
		return head->data;
	    }
};