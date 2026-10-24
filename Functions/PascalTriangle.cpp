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
int ncr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r)); // ncr
}
int main()
{
     int n;
    cout<<"Enter n No: ";
    cin>>n;
    
    for(int i=0;i<=n;i++)
    {
         for(int j=0;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
