#include <iostream>
using namespace std;

class Base
{
public:
    int i;
    int j;
    int k;

    void gun()
    {
        cout << "Inside Base gun";
    }

    void sun()
    {
        cout << "Inside Base sun";
    }

    virtual void mun()
    {
        cout << "Inside Base mun";
    }

    virtual void bun()
    {
        cout << "Inside Base bun";
    }
};

class Derived : public Base
{
public:
    int x;

    void tun()
    {
        cout << "Inside derived tun";
    }

    virtual void mun()
    {
        cout << "Inside derived mun";
    }

    virtual void fun()
    {
        cout << "Inside derived fun";
    }
};

int main()
{

    Base *bp1 = new Base();       // NoCasting
    Derived *dp1 = new Derived(); // NoCasting

    Base *bp2 = new Derived(); // Up-casting
    // Derived *dp2 = new Base();  //Down-Casting  //error
 

    return 0;
}