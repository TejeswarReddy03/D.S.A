#include<iostream>
using namespace std;
#include"dynamic_queue.cpp"
int main(){
dynamic_queue<int> q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
q.enqueue(6);
// cout<<q.front();
q.dequeue();
cout<<q.front();
}