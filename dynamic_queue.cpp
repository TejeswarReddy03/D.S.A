#include <iostream>
using namespace std;
template<typename T>
class dynamic_queue{
    T *data;
    int next_index;
    int front_index;
    int size;
    int capacity;
    public:
    dynamic_queue(){
        data=new T[4];
        next_index=0;
        front_index=-1;
        size=0;
        capacity=4;
    }
    int get_size(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
          T* newdata= new T[2*capacity];
          int j=0;
          for(int i=front_index;i<capacity;i++){
            newdata[j]=data[i];
            j++;
          }
          for(int i=0;i<front_index;i++){
            newdata[j]=data[i];
            j++;
          }
          delete []data;
          data=newdata;
          front_index=0;
          next_index=capacity;
          capacity*=2;
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