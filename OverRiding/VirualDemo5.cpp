#include <iostream>
using namespace std;

#pragma pack(1)

class Base
{
public:
    int i;
    int j;

    void gun()
    {
        cout << "Inside Base gun" << "\n";
    }

    void fun()
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

#pragma pack(1)

class Derived : public Base
{
public:
    int x;

    virtual void fun()
    {
        cout << "Inside derived run" << "\n";
    }

    virtual void mun()
    {
        cout << "Inside derived mun" << "\n";
    }

    virtual void bun()
    {
        cout << "Inside derived fun" << "\n";
    }
};

int main()
{

   Base * bp = new Derived(); 

    cout << sizeof(Base) << "\n";    // 16
    cout << sizeof(Derived) << "\n"; // 20

    bp->gun(); // Base gun
    // bp->sun(); // Base gun
    bp->mun(); // Derived mun
    bp->bun(); // Base bun
    //  bp->run();    //Error
    bp->fun(); // Error

    return 0;
}