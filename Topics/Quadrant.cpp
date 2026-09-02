# include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Lie in first Quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"lie in second Quadrant";
    }
    else if(x<0 && y<0)
    {
        cout<<"lie in third quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"Lie in Fourth Quadrant";
    }
    else 
    {
        cout<<"Lie at Origin";
    }
    return 0;
}