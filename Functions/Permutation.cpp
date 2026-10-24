# include <iostream>
using namespace std;
int fact(int f)
{
    int fact=1;
    for(int i=1;i<=f;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    int nPr=fact(n)/fact(n-r);
    cout<<nPr;
}