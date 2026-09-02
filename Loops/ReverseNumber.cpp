# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No:";
    cin>>n;
    int reverse=0;
    int sum=n;
    while(n!=0)
    {
      reverse*=10;
     reverse+=n%10;
      n/=10;
    }
    cout<<reverse+sum<<endl;
    
} 