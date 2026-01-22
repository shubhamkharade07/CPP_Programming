#include <iostream>
using namespace std;

class AreaDemo
{
public:
    float Rad;
    float PI = 3.14;

    AreaDemo(float a)
    {
        Rad = a;
    }

    float Area()
    {
        float fArea = 0;
        fArea = Rad * PI * PI;
        return fArea;
    }
};

int main()
{
    AreaDemo obj(10.3f);

    float fRet = 0;

    fRet = obj.Area();
    cout << "Area of circle is :" << fRet << "\n";

    return 0;
}