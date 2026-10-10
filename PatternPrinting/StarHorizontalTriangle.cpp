# include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter No:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=i;j<=row;j++)
        // for(int j=1;j<=row+1-i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
} 