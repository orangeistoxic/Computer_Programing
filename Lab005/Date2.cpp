#include <iostream>

using namespace std;

#include"Date2.h"

Date::Date(int month,int day,int yeear){

}

Date &Date::setMonth(int m){           //判別月是否正常
    if(m<1 || m>12){
        month=1;
    }
    else{
        month=m;
    }

    return *this;
}

Date &Date::setDay(int d){              //由於判別日期正常需要更多資料，因此統一放到checkDay來處理，這裡就不做任何判斷
    day=d;

    return *this;

}

Date &Date::setYear(int y){               //判別年是否正常
    if(y<1 || y>2023){
        year=1;
    }
    else{
        year=y;
    }

    return *this;
}

void Date::checkDay(){  //判別年是否正常 
    static const int daysPerMonth[ 13 ] ={ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  //注意~此處二月設為29日，等等閏月問題會放到下方處裡

    if(day<1 || day>daysPerMonth[month] ){
        day=1;
    }

    bool leapyear=false;

    if(month%4==0){           //雖然不是2月也會在此判定是不是leapyear，但後面會判別時會確認是否為2月，故不會因此出錯

        if(month%100==0){

            if(month%400==0){

                leapyear=true;
            }

        }
        else{
            leapyear=true;
        }
    }

    if(month==2 && !leapyear && day>28){   

        day=1;
    }

}

void Date::print() const{               //print日期
    cout<<month<<" "<<day<<" "<<year<<endl;
}

Date::~Date()
{ 

} 