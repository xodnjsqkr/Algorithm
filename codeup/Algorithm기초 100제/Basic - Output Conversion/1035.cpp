#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int n;
    cin>>setbase(16)>>n;
    cout<<setbase(8)<<n<<endl;
    return 0;
}