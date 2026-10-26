#include <iostream>
using namespace std;

void sum(int a, int b = 5)
{
    cout << a + b << endl;
}

int main()
{
    sum(10);     // Uses default b = 5
    sum(10, 20); // Uses b = 20

    return 0;
}