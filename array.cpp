#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,4> arr = {4,7,3,9};
    
    int size = arr.size();
    
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    cout<<"Element at 2nd index: "<<arr.at(2)<<endl;
    
    cout<<"is array empty => "<<arr.empty()<<endl;
    
    cout<<"First element: "<<arr.front()<<endl;
    cout<<"Last element: "<<arr.back()<<endl;
}