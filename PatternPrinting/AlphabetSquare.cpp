# include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter No:";
    cin>>row;
    cout<<"Enter No:";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
        // cout<<(char)(j+64)<<" ";   // alphabet Square 1
        // cout<<(char)(j+96)<<" ";   // alphabet Square 

        // cout<<(char)(i+64)<<" ";     // alphabet Square 3
        // cout<<(char)(i+96)<<" ";   // alphabet Square 3

        if(i%2==0)
{
        
          cout<<(char)(i+64)<<" "; // alphabet Square 4 (Even Or Odd Position)
        }
        else{           
            cout<<(char)(i+96)<<" ";
        }
    }
    
    cout<<endl;
}
}