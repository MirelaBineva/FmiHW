#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n>10 && n<=99)
    {
        int sum = 0;
        for (int i=10; i<=n; i++)
        {
            int firstDigit = n/10;
            int secondDigit = n%10;
            sum = sum +firstDigit + secondDigit;
        }
        cout << "sum is " << sum << endl;
    }



    return 0;
}
