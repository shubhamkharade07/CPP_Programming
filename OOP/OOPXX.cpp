#include <iostream>
using namespace std;

class Arithmatic
{
public:
    int iNo1; // characteristics
    int iNo2;

    Arithmatic() // DefaultConstructor
    {
        iNo1 = 0;
        iNo2 = 0;
    }

    Arithmatic(int A, int B) // Parameterized Constructor
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition() // Behaviour
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    int Substraction() // Behaviour
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};

int main()
{
    Arithmatic aObj1(11, 10);
    Arithmatic aObj2(21, 20);

    int iRet = 0;

    iRet = aObj1.Addition();
    cout << "Addition is :" << iRet << "\n";

    iRet = aObj1.Substraction();
    cout << "Substraction is :" << iRet << "\n";

    iRet = aObj2.Addition();
    cout << "Addition is :" << iRet << "\n";

    iRet = aObj2.Substraction();
    cout << "Substraction is :" << iRet << "\n";

    return 0;
}