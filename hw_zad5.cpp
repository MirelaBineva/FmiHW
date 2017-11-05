#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    int count = 0;

    for (int i=100; i<1000; i++)
    {
        num1=i/100;
        num2=(i/10)%10;
        num3=i%10;

        if (num1==num2 || num2==num3 || num1==num3)
            continue;
        cout << i << endl;
    }
        count ++;
        cout << count << endl;







    return 0;
}
