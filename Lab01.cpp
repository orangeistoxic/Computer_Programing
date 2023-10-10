// Fig. 2.22: fig02_22.cpp
// Counting letter grades.
#include <iostream>

using namespace std;

int main()
{
   string input;
   string Region = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   int NumRegion[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

   cin >> input; // 輸入和輸出ID
   cout << input << endl;

   bool Legit = true;

   if (input.length() != 10)
   { // 檢查ID長度是否正常
      Legit = false;
   }

   if (int(input[1]) != 49 && int(input[1]) != 50)
   { // 檢查性別字元是否正常
      Legit = false;
   }

   if (int(input[0]) < 65 || int(input[0] > 90))
   { // 檢查縣市字元是否正常
      Legit = false;
   }

   for (int i = 2; i <= 8; i++)
   {
      if (int(input[i]) < 48 || int(input[i] > 57))
      { // 檢查其他字元是否正常
         Legit = false;
         break;
      }
   }

   if (Legit)
   {

      int VerifyNum = 0, k; // 計算檢查碼

      for (int i = 0; i <= 25; i++)
      {
         if (Region[i] == input[0])
         {
            k = i;
            break;
         }
      }

      VerifyNum += NumRegion[k] / 10;
      VerifyNum += (NumRegion[k] % 10) * 9;

      for (int i = 1; i <= 8; i++)
      {
         VerifyNum += (int(input[i]) - 48) * (9 - i);
      }
      VerifyNum = 10 - (VerifyNum % 10);

      if (VerifyNum != int(input[9]) - 48)
      { // 判斷檢查碼
         Legit = false;
      }

      if (Legit)
      {
         cout << "ID is Correct." << endl;
      }
      else
      {
         cout << "ID is Wrong." << endl;
      }
   }
   else
   {
      cout << "ID is Wrong." << endl;
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
