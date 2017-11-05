#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n>10 && n<=200)
   {
       for(int i=n; i>=10; i--)
       {
           if (i%7==0)
           {
               cout << "i = " << i << endl;
           }
       }

   }



    return 0;
}
