#include <iostream>

using namespace std;

int main()
{
    //zad 1
    int n;
    cout << "n = ";
    cin >> n;
    int sum = 0;
    int userNumber;
    for (int i=0; i<n; i++)
    {
        do
        {
            cout << "Input: ";
            cin >> userNumber;
        }while (userNumber < 10 || userNumber > 5555);

        sum +=userNumber;
        cout << "Current sum : " << sum << endl;

    }


    return 0;
}
