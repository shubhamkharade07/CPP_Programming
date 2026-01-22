#include <iostream>
using namespace std;

class Base
{
public:
    int i;
    int j;

    void gun()
    {
        cout << "Inside Base gun" << "\n";
    }

    void sun()
    {
        cout << "Inside Base sun" << "\n";
    }

    virtual void mun()
    {
        cout << "Inside Base mun" << "\n";
    }

    virtual void bun()
    {
        cout << "Inside Base bun" << "\n";
    }
};

class Derived : public Base
{
public:
    int x;

    void run()
    {
        cout << "Inside derivedr run" << "\n";
    }

    virtual void mun()
    {
        cout << "Inside derived mun" << "\n";
    }

    virtual void fun()
    {
        cout << "Inside derived fun" << "\n";
    }
};

int main()
{

    Base *bp2 = new Derived(); // Up-casting

    cout << sizeof(Base) << "\n";    // 16
    cout << sizeof(Derived) << "\n"; // 20

   

    return 0;
}