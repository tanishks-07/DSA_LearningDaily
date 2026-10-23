# include <iostream>
using namespace std;
void Anurag()
{  
    cout<<"B"<<endl;
}
void amit()
{
    Anurag();
    cout<<"A"<<endl;
    
}
void Anu()
{
    cout<<"C"<<endl;
    amit();
}
int main()
{
    Anu();
    // amit();
    // Anurag();
}