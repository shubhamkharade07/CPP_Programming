#include <iostream>
using namespace std;

class AreaDemo
{
public:
    float Rad;
    float PI;

    AreaDemo(float a, float b)
    {
        Rad = a;
        PI = b;
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
    AreaDemo obj(10.3f, 3.14f);

    float fRet = 0;

    fRet = obj.Area();
    cout << "Area of circle is :" << fRet << "\n";

    return 0;
}