#include<climits>
#include <iostream>
using namespace std;

class stack_usingArray_dynamic{
    int* data;
    int nextIndex;
    int capacity;
    public:
    stack_usingArray_dynamic(){
        data= new int[1];
        nextIndex=0; 
        capacity=1;
    }
    int size(){
        return nextIndex;
    }
    bool isempty(){
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex==capacity){
             int* newData=new int[2*capacity];
             for(int i=0;i<capacity;i++){
                newData[i]=data[i];
             }
             capacity*=2;
        delete []data;
        data=newData;
        }
        
        
        data[nextIndex]=element;
        nextIndex++;
    }
    int pop(){
        if(isempty()){
            cout<<"stack is empty";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];

    }
    int top(){
        if(isempty()){
            cout<<"stack is empty";
            return INT_MIN;
        }
        int k=nextIndex-1;
        return data[k];
    }
}; 
int main(){
    stack_usingArray_dynamic s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.size();
}