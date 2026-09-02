# include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Base:";
    cin>>a;
    int b;
    cout<<"Enter Exponent";
    cin>>b;
    int Store=1;
    for(int i=1;i<=b;i++)
    {
        if(a==1)
        break;
        Store=Store*a;
        if(a==0 && b==0)
        {
            cout<<"Invalid";
        }
    }
    cout<<Store;
}