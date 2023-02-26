#include<climits>
#include <iostream>
using namespace std;

class stack_usingArray{
    int* data;
    int nextIndex;
    int capacity;
    public:
    stack_usingArray(int total_size){
        data= new int[total_size];
        nextIndex=0; 
        capacity=total_size;
    }
    int size(){
        return nextIndex;
    }
    bool isempty(){
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex==capacity){
            cout<<"stack is full";
            return;
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