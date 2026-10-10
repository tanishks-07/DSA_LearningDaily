# include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter No:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++)
    {

        for(int j=i;j<=row-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
         cout<<endl;
    }
}

// # include <iostream>
// using namespace std;
// int main()
// {
//     int row;
//     cout<<"Enter No:"<<endl;
//     cin>>row;
//     for(int i=1;i<=row;i++)
//     {
//          for(int j=1;j<=row;j++)
//         {
//             if(j+i>row)
//             {
//         cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//          cout<<endl;
//     }
// }