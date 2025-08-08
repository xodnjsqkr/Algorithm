#include <iostream>
using namespace std;
int main(void) 
{
    int n,cnt_A=0,cnt_B=0;
    char x;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cin>>x;
        if(x=='A') cnt_A++;
        else if(x=='B') cnt_B++;
    }
    if(cnt_A==cnt_B)
        cout<<"Tie"<<"\n";
    else
        cout<<(cnt_A>cnt_B?"A":"B")<<"\n";
    return 0;
}