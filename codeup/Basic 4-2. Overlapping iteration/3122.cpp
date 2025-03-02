#include <iostream>
using namespace std;
int main(void) 
{
    int n;
    cin>>n; 
    for(int i=0;i<n*2-1;i++) 
    {
        for(int j=0;j<n*2-1;j++) 
        {
            int dist=abs(n-1-i)+abs(n-1-j);
            if (dist<n) 
            {
                cout<<"*";
            } else 
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}