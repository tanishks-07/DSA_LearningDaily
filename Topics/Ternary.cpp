 // Using Ternary Operator
// # include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter a Number";
//     cin>>a;
//     // (a%2==0)? cout<<"yes" : cout<<"no";
//     cout<<((a%2==0) ? "Even" : "odd");
// }

// Variables Ternary
// # include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter Number";
//     cin>>x;
//     int y=(x++ > 12) ? x-5 : x*4;
//     cout<<y;
// }

# include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int y=(a>b)? ((a>c)? a : c) :((b>c)? b : c);
    cout<<y;
}