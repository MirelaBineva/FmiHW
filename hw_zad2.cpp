#include <iostream>

using namespace std;

int main()
{
    //zad 2
    int num;
    int sum = 0;
    int average;
    int count = 0;

    do {
        cout << "Num = ";
        cin >> num;

        if (num >= 1 && num <= 200)
        {
            sum += num;
            count ++;
        }
    } while (num >=1);

    average = sum/count;
    cout << "Sum = " << sum << endl;
    cout << "Count = " << count << endl;
    cout << "Average = " << average << endl;


    return 0;
}
