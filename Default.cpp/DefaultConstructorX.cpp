#include <iostream>
using namespace std;

class Demo
{

public:
    int iNo1;
    int iNo2;

    Demo(int a = 0, int b = 0)
    {
        this->iNo1 = a;
        this->iNo2 = b;
    }
};

int main()
{

    Demo dobj1;         // iNo1 = 0, iNo2=0
    Demo dobj2(10);     // iNo1 =10,iNo2=0
    Demo dobj3(10, 20); // iNo1=10,iNo2=20

    return 0;
}