//請先讀 助教README

#ifndef DATE_H  
#define DATE_H 

#include<iostream>

using namespace std;
class   Date{
    public:

    Date(string="A123456789",int=1990,int=1,int=1);

    void Set(string ,int ,int ,int );
    void Print();
    bool Compare(Date);
    string ID;
    int Year;
    int Month;
    int Day;

    
    

};

#endif