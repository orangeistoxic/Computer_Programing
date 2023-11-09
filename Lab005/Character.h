// Fig. 7.8: employee1.h
// Employee class definition.
// Member functions defined in employee1.cpp.
#ifndef EMPLY1_H
#define EMPLY1_H

// include Date class definition from date1.h
#include "date2.h"

class Character {

public:
   Character( string ="John", string="Doe",  Date=0,  Date=0,string ="US",string="NYK" );  
   
   //注意~此處的兩個Date類型預設值都為零，這樣出來會跑出怪怪的值，但是在主程式中確保了一定會覆蓋掉那些內容，在這裡設為零只是想要一個預設值而已。

   void print() const;
   ~Character();  // provided to confirm destruction order

private:
   string firstName;
   string lastName;
   string Country;
   string City; 
   Date birthDate;  // composition: member object
   Date hireDate;   // composition: member object

}; // end class Employee

#endif

/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
