#include <iostream>

using namespace std;

int main()
{
   int number;
   cout << "number = ";
   cin >> number;

   for (int delitel = 1; delitel <= number; delitel ++)
   {
       if (number%delitel==0)
       {
           cout<< "delitel = " << delitel;
       }
   }


    return 0;
}
