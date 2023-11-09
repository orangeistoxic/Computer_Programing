// Fig. 7.9: employee1.cpp
// Member-function definitions for class Employee.
#include <iostream>

using namespace std;

#include <cstring>      // strcpy and strlen prototypes

#include "Character.h"  // Employee class definition
#include "date2.h"      // Date class definition

// constructor uses member initializer list to pass initializer
// values to constructors of member objects birthDate and      
// hireDate [Note: This invokes the so-called "default copy    
// constructor" which the C++ compiler provides implicitly.]   
Character::Character( string first, string last,  Date dateOfBirth,  Date dateOfHire ,string country, string city)  

//此處將所有的char都改為string,也捨棄指標，主要原因是因為char還需要處理字元問題，而設定const 讓後續再更改Character裏頭的內容變得不容易，且不能設定預設內容(指的是像日期可以預設1/1/1900)。
   : birthDate( dateOfBirth ),  // initialize birthDate
     hireDate( dateOfHire )     // initialize hireDateba
{
   firstName=first;
   lastName=last;
   Country=country;
   City=city;

} // end Employee constructor

// print Employee object
void Character::print() const
{
   cout<<"-------"<<endl;           //加上-------來讓閱讀更加容易
   cout << lastName << " " << firstName << "\nHired: ";
   hireDate.print();

   cout << "Birth date: ";
   birthDate.print();

   cout<<"Current Location: "<<Country<<" "<<City<<endl;

} // end function print



Character::~Character()
{ 

} // end ~Employee destructor

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
