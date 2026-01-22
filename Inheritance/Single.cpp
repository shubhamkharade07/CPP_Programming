#include <iostream>
using namespace std;

class Base // Parent class      //8
{
public:
    int i;
    int j;

    int Addition(int a, int b)
    {
        return a + b;
    }

    int Subtraction(int a, int b)
    {
        return a - b;
    }
};

class Derived : public Base // Child class           //12
{
public:
    int k;

    int Multiplication(int a, int b, int c)
    {
        return a * b * c;
    }
};

int main()
{
    Base bObj;
    Derived dObj;

    cout << "Size of Base Class Object: " << sizeof(bObj) << "\n";
    cout << "Size of Derived Class Object: " << sizeof(dObj) << "\n";

    int iRet = 0;

    iRet = dObj.Addition(10, 11);
    cout << "Addition is : " << iRet << "\n";

    iRet = dObj.Subtraction(19, 11);
    cout << "Subtraction is : " << iRet << "\n";

    iRet = dObj.Multiplication(2, 5, 10);
    cout << "Multiplication is : " << iRet << "\n";

    return 0;
}