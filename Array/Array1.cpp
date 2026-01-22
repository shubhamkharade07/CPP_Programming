#include <iostream>
using namespace std;

int main()
{

    int Arr[] = {10, 20, 30, 40, 50};

    int *p = &Arr[2];
    int *q = &Arr[4];

    int iX = q - p;
    int iY = *(q - 2);
    int iZ = *(p + 2);

    cout << iX;
    cout << iY;
    cout << iZ;

    return 0;
}