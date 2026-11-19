#include <iostream>
using namespace std;
void value(int *ptr)
{
    *ptr=20;
}
int main()
{
    int x=10;
    value(&x);
    cout<<x;
}
