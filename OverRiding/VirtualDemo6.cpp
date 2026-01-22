#include <iostream>
using namespace std;

class Base
{
public:
    void gun()
    {
        cout << "Inside Base gun";
    }

    virtual void sun()
    {
        cout << "Inside Base sun";
    }
};

class Derived : public Base
{

public:
    virtual void fun()
    {
        cout << "Inside Derived fun";
    }
    void gun()
    {
        cout << "Inside Derived gun";
    }
    virtual void sun()
    {
        cout << "Inside Derived sun";
    }
};

int main()
{
    Derived dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
}