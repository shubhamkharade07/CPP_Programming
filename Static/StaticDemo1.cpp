#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    static int x; // object size 8.. memory not allocated for static data

    Demo()
    {
        this->i = 0;
        this->j = 0;
    }

    Demo(int a, int b)
    {
        this->i = a;
        this->j = b;
    }

    void fun() // void fun(Demo *const this)
    {
        cout << "Inside fun..\n";
    }

    static void gun() // static void gun()
    {
        cout << "Inside gun..\n";
    }
};

int Demo ::x = 11; // Initialization for static

int main()
{

    Demo::gun(); // ::  -> Scope resolution operator
    cout << "value of x is:" << Demo::x << "\n";

    return 0;
}