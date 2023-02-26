#include <iostream>
using namespace std;
template<typename T>
class queue_using_array{
    T *data;
    int next_index;
    int front_index;
    int size;
    int capacity;
    public:
    queue_using_array(int s){
        data=new T[s];
        next_index=0;
        front_index=-1;
        size=0;
        capacity=s;
    }
    int get_size(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"queue is full";
            return;
        }
        data[next_index]=element;
        next_index=(next_index+1)%capacity;
        if(front_index==-1){
        front_index=0;
    }
    size++;
    }
    T front(){
        if(isempty()){
            cout<<"queue is empty";
            return 0;
        }
        return data[front_index];
    }
    T dequeue(){
        if(isempty()){
            cout<<"queue is empty";
            return 0;
        }
        
            T ans=data[front_index];
            front_index=(front_index+1)%capacity;
            size--;
            return ans;
            if(size==0){
                front_index=-1;
                next_index=0;
            }

        
    }
    

};