#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y>z&&y+z>x&&z+x>y)
    {
        if(x==y&&y==z)
        {
            cout<<"정삼각형";
        }
        else if(x==y||x==z||y==z)
        {
            cout<<"이등변삼각형";
        }
        else if((pow(x,2)+pow(y,2)==pow(z,2))||(pow(x,2)+pow(z,2)==pow(y,2))||(pow(y,2)+pow(z,2)==pow(x,2)))
        {
            cout<<"직각삼각형";
        }
        else
        {
            cout<<"삼각형";
        }
    }
    else
    {
        cout<<"삼각형아님";
    }
    return 0;
}