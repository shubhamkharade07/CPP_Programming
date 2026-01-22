#include <iostream>
using namespace std;

class Demo
{
public:
    int iNo1;
    int iNo2;

    Demo()
    {
        iNo1 = 0;
        iNo2 = 0;
    }

    Demo(int a)
    {
        iNo1 = a;
    }

    Demo(int a, int b)
    {
        iNo1 = a;
        iNo2 = b;
    }
};

int main()
{

    Demo dobj1;
    Demo dobj2(10);
    Demo dobj(10, 20);

    return 0;
}