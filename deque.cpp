//doubly-ended queue is used to create 'deque'
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> deq;
    
    deq.push_back(6);
    deq.push_front(2);
    deq.push_back(3);
    deq.push_back(5);
    deq.push_front(7);
    for(int i:deq)
        cout<<i<<" ";
    cout<<endl;
    
    deq.pop_front();
    cout<<"\nAfter popping from front: ";
    for(int i:deq)
        cout<<i<<" ";
    cout<<endl;
    
    cout<<"\nPrinting element at 1st index:"<<deq.at(1)<<endl;
    cout<<"first element: "<<deq.front()<<endl;
    cout<<"last element: "<<deq.back()<<endl;
    cout<<"is deque empty => "<<deq.empty()<<endl;
    
    deq.erase(deq.begin(),deq.begin()+2);
    cout<<"\nAfter erasing first 2 elements: ";
    for(int i:deq)
        cout<<i<<" ";
    cout<<endl;
}