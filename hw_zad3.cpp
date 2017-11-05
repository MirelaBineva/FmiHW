#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "number = ";
    cin >> number;
    int broi = 0;
    while (number > 0)
    {
        number=number/10;
        broi++;
    }
    cout << "broi = "<< broi;


    return 0;
}
