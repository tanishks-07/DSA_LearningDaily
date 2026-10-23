# include <iostream>
using namespace std;
void f(int n)
{
   cout<<n<<endl;
   if(n<=10) return;
   cout<<n*n;
}
int main()
{
    f(3);
}