#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==0)
    {
        cout<<"0";
        return 0;
    }

    // code here
    int store=1;
    for(int i=1;i<n;i++)
    {
        store=store+i;
        store++;
    }
    cout<<store;

    return 0;
}