//請先讀 助教README

#include<iostream>
#include <iomanip>
#include"Date.h"

using namespace std;



Date::Date(string a,int b,int c,int e){
    ID=a;
    Year=b;
    Month=c;
    Day=e;

}

bool Date::Compare(Date another){             //比較兩組資料是否有交換的必要

    bool Change=false;

    if(Year>another.Year){
        Change=true;
    }
    else if(Year==another.Year){
        if(Month>another.Month){
            Change=true;
        }
        else if(Month==another.Month){
            if(Day>another.Day){
                Change=true;
            }
        }
    }

    return Change;
}

void Date::Set(string id,int y,int m,int d){   //手動設定資料
        ID=id;
        Year=y;
        Month=m;
        Day=d;
}


void Date::Print(){                            //輸出資料
    cout<<ID<<"  "<<Year<<" "<<Month<<" "<<Day<<endl;
}