#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Soman");
    q.push("Anshuman");
    q.push("Kumar");

    cout<<"First element: "<<q.front()<<endl;
    cout<<"size before pop: "<<q.size()<<endl;

    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"size after pop: "<<q.size()<<endl;
}