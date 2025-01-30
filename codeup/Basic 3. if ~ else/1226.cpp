#include <iostream>
using namespace std;
int main(void)
{
    int lotto[7]={0},me[6]={0},check=0,bonus_cnt=0;
    for(int i=0;i<7;i++)
    {
        cin>>lotto[i];
    }
    for(int i=0;i<6;i++)
    {
        cin>>me[i];
    }
    for(int i=0;i<6;i++) 
    {
        for(int j=0;j<6;j++) 
        {
            if(lotto[i]==me[j]) 
            {
                check++;
            }
        }
        if(lotto[6]==me[i])
        {
            bonus_cnt++;
        }
    }
    if(check==5&&bonus_cnt>0)
    {
        cout<<2;
    }
    else
    {
        switch(check)
        {
            case 6:
                cout<<1;
                break;
            case 5:
                cout<<3;
                break;
            case 4:
                cout<<4;
                break;
            case 3:
                cout<<5;
                break;
            default:
                cout<<0;
                break;
        }
    }
    return 0;
}