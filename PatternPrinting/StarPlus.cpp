# include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter row & col:-";
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
       for(int j=1;j<=col;j++)
       if(i==(row/2)+1 || j==(col/2)+1)
       {
        cout<<"*"<<" ";
       }
       else{
        cout<<"  ";
       }
       cout<<endl;
    }
}