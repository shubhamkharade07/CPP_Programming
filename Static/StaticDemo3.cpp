#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    static int x; // total object size 8.. memory not allocated for static data

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
        cout << "value of i is:" << this->i << "\n";
        cout << "value of j is:" << this->j << "\n";
        cout << "value of x is:" << x << "\n";
    }

    static void gun() // static void gun()
    {
        cout << "Inside gun..\n";
        // cout << i << "\n";   //Not Allowed
        // cout << j << "\n";     //Not Allowed
        cout << x << "\n";
    }
};

int Demo ::x = 11; // Initialization for static

int main()
{

    Demo::gun(); // ::  -> Scope resolution operator
    cout << "value of x is:" << Demo::x << "\n";

    Demo obj(10, 20);

    obj.fun();

    obj.gun(); // valid but Not a good Practice  // Demo::gun();  is Good Practice to Call Static

    cout << "size of obj is :" << sizeof(obj) << "\n";
    return 0;
}