#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y,z,cnt=0;
    cin>>x>>y>>z;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            for(int k=0;k<z;k++)
            {
                cout<<i<<" "<<j<<" "<<k<<"\n";
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}