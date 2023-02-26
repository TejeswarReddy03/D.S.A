#include <iostream>
using namespace std;
#include "queue_using_array.cpp"
int main(){
 queue_using_array<int> q(5);
 q.enqueue(5);
 q.enqueue(3);
 q.enqueue(4);
 cout<<q.dequeue();
}
