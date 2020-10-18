/*## print the sum of all odd numbers from 1 to n In C++*/
/*## Calculation C++ Programs, Datatype C++ Programs, Basic C++ Programs*/

#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
   // Declare Variables
   int i, limit, sum = 0;

   cout << "Simple C++ Program : print the sum of all odd numbers from 1 to n\n";
   cout << "\nEnter Limit : ";
   cin>>limit;

   for (i = 1; i <= limit; i += 2) {
      sum += i;
      cout << "\nOdd Number Is : " << i << " Sum : " << sum;
   }

   cout << "\n\nTotal Sum of Odd numbers 1 to " << limit << " : " << sum;

   getch();
   return (0);
}
