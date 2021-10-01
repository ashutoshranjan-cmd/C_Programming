//call by value and call by reference
#include <iostream>
using namespace std;
void swapPointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "The value of x is " << *a << " and the value of y is " << *b << endl;
}
int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << "and the value of y is " << y << endl;
    swapPointer(&x, &y);
    cout << "The value of x is " << x << "and the value of y is " << y << endl;
    return 0;
}