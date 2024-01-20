#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    
    cout<<"Capacity = "<<vec.capacity()<<endl;
    
    vec.push_back(4);
    cout<<"\nCapacity = "<<vec.capacity()<<endl;
    
    vec.push_back(7);
    cout<<"\nCapacity = "<<vec.capacity()<<endl;
    
    vec.push_back(2);
    cout<<"\nCapacity = "<<vec.capacity()<<endl;
    cout<<"Size = "<<vec.size()<<endl;
    
    for(int i:vec){
        cout<<i<<" ";
    }cout<<endl;
    
    vec.pop_back();
    cout<<"\nCapacity = "<<vec.capacity()<<endl;
    cout<<"Size = "<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"first element: "<<vec.front()<<endl;
    cout<<"last element: "<<vec.back()<<endl;
    
    //another vector with initially defined size
    vector<int> vec2(5,3);
    cout<<"\n2nd vector:";
    for(int i:vec2){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity = "<<vec2.capacity()<<endl;
    
    vec2.push_back(8);
    for(int i:vec2){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity = "<<vec2.capacity()<<endl;
    cout<<"Size = "<<vec2.size()<<endl;
    
    cout<<"\nafter clearing this vector:"<<endl;
    vec2.clear();
    cout<<"Capacity = "<<vec2.capacity()<<endl;
    cout<<"Size = "<<vec2.size()<<endl;
    cout<<"is vec2 empty => "<<vec2.empty()<<endl;
    
    //copying a vector in another vector
    vector<int> vec3(vec);
    cout<<"\nCopied vector: ";
    for(int i:vec3){
        cout<<i<<" ";
    }cout<<endl;
}