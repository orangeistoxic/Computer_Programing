

// 請閱讀 "助教README" ，謝謝

// Fig. 7.10: fig07_10.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>

using namespace std;


#include "Character.h"  // Character class definition



// int main()                                       //這段註解是剛在E3下載下來時就有的內容，我把它註解掉以方便我重做一個，請無視它
// {
//    Date birth( 7, 24, 1949 );

//    Date hire( 3, 12, 1988 );

//    Character manager( "Bob", "Jones", birth, hire );


//    cout << '\n';
//    manager.print();

//    cout << "\nTest Date constructor with invalid values:\n";

//    Date lastDayOff( 14, 35, 1994 );  // invalid month and day

//    cout << endl;

//    return 0;

// } 


int main(){

   Character PersonalInfo[10];  //10人資料

   for(int i=0;i<10;i++){

      Date Birth,Hired;                             //先宣告一些等等需要使用的變數
      string firstName, lastName, Country, City;
      int BM,BD,BY,HM,HD,HY;

      cout<<"Please input the Personal Data in following order: firstName, lastName, DateofBirth, DateofHired, Country, City."<<endl;
      cin>>firstName>>lastName>>BM>>BD>>BY>>HM>>HD>>HY>>Country>>City;

      Birth.setMonth(BM).setDay(BD).setYear(BY).checkDay();     //題目5. 要求的"Cascaded member function calls"在這裡
      Hired.setMonth(HM).setDay(HD).setYear(HY).checkDay(); 

      Character Dataset(firstName,lastName,Birth,Hired,Country,City);  //Lab04時我是使用設定一個class函數來輸入想要的值進入Class內，這次想實驗另一個方法，成功ㄌ，所以就留下來ㄌ

      PersonalInfo[i]=Dataset;

    

   }

   for(int i=0;i<10;i++){
      PersonalInfo[i].print();   //Print結果
   }
}

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
