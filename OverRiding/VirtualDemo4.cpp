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

#pragma pack(1)

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

    bp2->gun(); // Base gun
    bp2->sun(); // Base gun
    bp2->mun(); // Derived mun
    bp2->bun(); // Base bun
    //  bp2->run();    //Error
    //  bp2->fun();    //Error

    return 0;
}