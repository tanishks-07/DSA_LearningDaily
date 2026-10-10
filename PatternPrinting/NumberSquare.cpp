# include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter No:";
    cin>>row;
    cout<<"Enter Col:";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            // cout<<j<<" "; 
            cout<<i<<" "; // Number Square 2
        }
 
       cout<<endl;
    }
}