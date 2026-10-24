# include <iostream>
using namespace std;
int fact(int X)
{
    int fact=1;
    for(int i=1;i<=X;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
    int Ans=fact(n)/(fact(r)*fact(n-r));
    cout<<Ans;
}