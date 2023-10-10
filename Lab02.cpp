// C++ program to demonstrate
//  the use of rand()
#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

long GetID()
{
    string input;
    string Region = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    long NumID = 0;
    int NumRegion[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

    cout << "Input your ID" << endl;
    cin >> input; // 輸入和輸出ID
    cout << "Your ID is  " << input << endl;

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

    if (Legit)
    {
        for (int i = 1; i <= 9; i++)
        {
            NumID += (int(input[i]) - 48) * pow(10, 9 - i);
        }
    }
    else
    {
        NumID = 0; // 如果ID是錯誤的 那也沒有比較的意義ㄌ 所以回傳一個 0方便以後判斷
    }
    return NumID;
}

long RandomID()
{
    string Region = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string Num = "0123456789";
    int NumRegion[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    string GenID = "0123456789"; // 隨便弄個字上去 不然沒設的話好像會跑掉
    long NumGID = 0;

    srand(time(0));

    GenID[0] = Region[rand() % 26]; // 設地區

    GenID[1] = Num[(rand() % 2) + 1]; // 設性別

    for (int i = 2; i <= 8; i++) // 設流水碼
    {
        GenID[i] = Num[rand() % 10];
    }

    int VerifyNum = 0, k; // 計算並設置檢查碼

    for (int i = 0; i <= 25; i++)
    {
        if (Region[i] == GenID[0])
        {
            k = i;
            break;
        }
    }

    VerifyNum += NumRegion[k] / 10;
    VerifyNum += (NumRegion[k] % 10) * 9;

    for (int i = 1; i <= 8; i++)
    {
        VerifyNum += (int(GenID[i]) - 48) * (9 - i);
    }
    VerifyNum = 10 - (VerifyNum % 10);

    GenID[9] = Num[VerifyNum];

    cout << "Generated ID is  " << GenID << endl;

    for (int i = 1; i <= 9; i++)
    {
        NumGID += (int(GenID[i]) - 48) * pow(10, 9 - i);
    }

    return NumGID;
}

void CompareID(long NumID, long NumGID)
{
    if (NumID == 0)
    {
        cout << "Your ID is wrong, cannot compare" << endl; // Input ID是錯的
    }
    else
    {
        cout << "The bigger number is  " << max(NumID, NumGID) << endl;
    }
}
int main()
{
    long NumID, NumGID;

    NumID = GetID();
    NumGID = RandomID();

    CompareID(NumID, NumGID);
}