#include <iostream>
using namespace std;

class Base
{
public:
    int i;
    int j;

    int Addition(int a, int b) // Concrete
    {
        return a + b;
    }

    virtual int Subtraction(int a, int b) = 0; // Abstraction
};

class Derived : public Base
{
public:
    int x;

    int Subtraction(int a, int b) // Concrete
    {
        return a - b;
    }

    int Multiplication(int a, int b) // Concrete
    {
        return a * b;
    }
};

int main()
{

    Base *bp = new Derived(); // Up-casting

    int iRet = 0;

    iRet = bp->Addition(11, 10); // 21
    cout << iRet << "\n";

    iRet = bp->Subtraction(11, 10); // 1
    cout << iRet << "\n";

    // iRet = bp->Multiplication(11, 10);         //Error

    return 0;
}