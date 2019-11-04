#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a(2), b(4), c(-6);
    cout << a << b << c <<endl;
    int& reference(b);
    cout << b << reference;
    return 0;
}