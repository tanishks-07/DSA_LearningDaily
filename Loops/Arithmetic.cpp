# include <iostream>
using namespace std;
int main()
{
    // 2 5 8 11 14 17...
    int n;
    cout<<"Enter No:";
    cin>>n;
    // for(int i=2;i<=3*n-1;i=i+3)
    // {
    //     cout<<i<<" ";
    // }
    for(int i=1;i<=n;i++)
    {
        cout<<3*i-1<<" ";
    }
}