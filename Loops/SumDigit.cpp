# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No:";
    cin>>n;
    int sum=0;
    while(n!=0)
    {
      int Last=n%10;
      sum+=Last;
      n/=10; // Later digit kam ho jaye
    }
    cout<<sum;
}