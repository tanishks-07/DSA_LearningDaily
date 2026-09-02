// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     if(a>=18)
//     {
//         cout<<"pass"<<endl;
//     }
//     else{
//         cout<<"fail"<<endl;
//     }
//     return 0;
// }

// Integer
// # include <iostream>
// using namespace std;
// int main()
// {
//     float x;
//     cin>>x;
//     int y=int(x);
//     if(x==y)
//     {
//         cout<<"integer"<<endl;
//     }
//     else{
//         cout<<"Not integer";
//     }
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     if(x>y)
//     {
//         cout<<"profit"<<endl;
//     }
//     else if(x==y)
//     {
//         cout<<"neutral"<<endl;
//     }
//     else{
//         cout<<"loss"<<endl;
//     }
//     return 0;
// }

// Four digit Number
// # include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n>=1000 && n<=9999)
//     {
//         cout<<" yes four digit no"<<" "<<n;
//     }
//     else{
//         cout<<"Not four digit";
//     }
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n>=0 && n<69)
//     {
//         cout<<"No is less than 69"<<n;
//     }
//     else{
//         cout<<"more than";
//     }
//     return 0;
// }

// NO divisible by 5 or 3
// # include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   if(n%5==0 || n%3==0)
//   {
//     cout<<"No is divisible"<<n;
//   }
//   else{
//     cout<<"Not divisible";
//   }
//   return 0;
// }

// Check of side of triangle (Sum of two side is greater than third)
// # include <iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(x+y>z && x+z>y && y+z>x)
//     {
//         cout<<"verify size of triangle"<<x<<y<<z;
//     }
//     else{
//         cout<<"Not verify";
//     }
//     return 0;
// }
// 
// Print Greatest No
// # include <iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(x>=y && x>=z)
//     // if(x<=y && x<=z)
//     {
//         cout<<"Greatest No is"<<x;
//     }
//      else if(y>=x && y>=z)
//     // else if(y<=x && y<=z)
//     {
//          cout<<"Greatest No is"<<y;
//         // cout<<"smallest No is"<<y;
//     }
//     else{
//          cout<<"Greatest No is"<<z;
//         //  cout<<"smallest No is"<<z;
//     }
//     return 0;
// }

// Multiple if and else use
# include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
     if(x%5==0 && x%3==0)
    {
        cout<<"No is divisible by Both"<<x;
    }
    else if(x%5==0)
    {
        cout<<"No is Divisible by 5"<<" "<<x;
    }
    else if(x%3==0)
    {
        cout<<"No is Divisible by 3"<<" "<<x;
    }
    else
    {
        cout<<"No is Divisible by either one of them"<<" "<<x;
    }
    return 0;
}