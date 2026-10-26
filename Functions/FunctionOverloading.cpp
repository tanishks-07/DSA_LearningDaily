# include <iostream>
using namespace std;
void fun()
{
    cout<<"Hello"<<endl;
}
void fun(int x)
{
    cout<<"Hello tanishk"<<endl;
}
void fun(int x, int y)
{
    cout<<"Humm"<<endl;
}
int main()
{
    fun();
    fun(2);
    fun(2,3);
}