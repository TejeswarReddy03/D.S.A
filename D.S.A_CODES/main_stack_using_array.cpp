#include <iostream>
#include "stack_using_array.cpp"
using namespace std;

int main(){
stack_usingArray a(5);
a.push(3);
a.push(2);
cout<<a.top();
cout<<a.size();
a.pop();
a.pop();
cout<<a.isempty();
}