#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
    int x,n;
    queue<int> q;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>n;
        q.push(n);
    }
    for(int i=0;i<x;i++)
    {
        queue<int> temp=q;
        while(!temp.empty()) 
        {
            cout<<temp.front()<<" ";
            temp.pop();
        }
        cout<<"\n";
        int front = q.front();
        q.pop();
        q.push(front);
    }
    return 0;
}