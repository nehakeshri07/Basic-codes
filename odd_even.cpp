/*## Check if an integer is odd or even In C++*/
/*## Calculation C++ Programs, Datatype C++ Programs, Basic C++ Programs*/

#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
   // Declare Variable
   int number;

   cout << "Simple C++ Program : Check if an integer is odd or even\n";
   cout << "\nEnter an integer : ";
   cin>>number;

   if (number % 2 == 0)
      cout << "\nThe number you entered is an EVEN number";
   else
      cout << "\nThe number you entered is an ODD number";

   getch();
   return (0);
}
