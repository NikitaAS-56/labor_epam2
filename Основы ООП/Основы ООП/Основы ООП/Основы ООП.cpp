#include <iostream>
#include"Header.h"
using namespace std;



int main()
{      
   setlocale(0, "");

   STRING H1;
   cout << endl;
   STRING STR2(" I");
   cout << endl;
   STRING STR3(STR2);
   cout << endl;
   STRING str4(std::move(STR2));
   cout << endl;
 
   return 0;
}