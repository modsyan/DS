#include <iostream>
#include < 
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 0;
    return n * factorial(n - 1);l
    
}

void setup()
{

    cout << factorial(4);
}

void loop()
{

}