# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No:";
    cin>>n;
    long long Fact=1;
    for(int i=2;i<=n;i++)
    {
       Fact=Fact*i;

    }
    cout<<Fact;
}