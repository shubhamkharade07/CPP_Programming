#include <iostream>
using namespace std;

class Demo
{
public:
    int iNo1;
    int iNo2;

    Demo(int a = 10, int b = 20)
    {
        int iNo1 = a;
        int iNo2 = b;
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    int Subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};

int main()

{
    Demo dobj;

    int iRet = 0;

    iRet = dobj.Addition();
    cout << iRet;

    return 0;
}