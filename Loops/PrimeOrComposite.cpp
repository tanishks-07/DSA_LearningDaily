// # include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter No:";
//   cin>>n;
//   int count=0;
//   for(int i=1;i<=n;i++)
//   {
//     if(n%i==0)
//     {
//       count++;
//     }
//   }
//  if(count==1)
//  {
//   cout<<"Neither Prime Nor Composite";
//  }
//  else if(count>=3)
//  {
//   cout<<"Composite No:";
//  }
//  else{
//   cout<<"Prime No:";
//  }
//  return 0;
// }


// Method 2

# include <iostream>
# include <cmath>
using namespace std;
int main()
{
  int n;
  cout<<"Enter No:";
  cin>>n;
  bool check=false; // false==prime
  for(int i=2;i<sqrt(n);i++) // i*i<n;
  {
    if(n%i==0)
    {
      check=true;
      break;
    }
  }
  if(n==1)
  {
    cout<<"Neither Prime Nor Composite";
  }
  else if(check==true)
  {
    cout<<"Composite No:";
  }
  else
  {
    cout<<"Prime No";
  }
  
}