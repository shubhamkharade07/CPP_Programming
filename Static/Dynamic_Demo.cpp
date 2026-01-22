#include <iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout << "Enter the  number of elements: \n";
    cin >> length;

    // Step 1 : Allocate the memory
    Arr = new int[length];
    if (Arr == NULL)
    {
        cout << "Unable to allocate memory\n";
    }
    else
    {
        cout << "Memory gets succesfully allocated\n";
    }

    // step 2: Use the memory

    // step 3 : Deallocate the memory
    delete[] Arr; // to delete the whole array, either it will only delete first elements address

    return 0;
}