/*## Area Of Rectangle In C++*/
/*## Calculation C++ Programs, Datatype C++ Programs, Basic C++ Programs*/

#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
   // Declare Variables
   int length, breadth, area;

   cout << "Simple C++ Program : Area Of Rectangle\n";
   cout << "\nEnter the Length of Rectangle : ";
   cin>>length;

   cout << "\nEnter the Breadth of Rectangle : ";
   cin>>breadth;

   area = length * breadth;
   cout << "\nArea of Rectangle : " << area;

   getch();
   return (0);
}
