//請先讀 助教README

#include "Date.h"
#include<iostream>

using namespace std;

int main(){
    Date  person[10];
    cout<<"Please enter your ID and Birthday."<<endl;
    for(int i=0;i<10;i++){                              //輸入10組個人資料，其中抱括身分證以及西元生日
        string id;
        int y,m,d;
        cin>>id>>y>>m>>d;
        person[i].Set(id,y,m,d);
        
    }
    bool C=true;
    while(C){                                           //對10組資料做年齡排序
        C=false;
        for(int i=0;i<9;i++){
            bool cc=false;
            cc=person[i].Compare(person[i+1]);
            
            if(cc){
                swap(person[i],person[i+1]);
                if(C==false){
                    C=cc;
                }
            }
        }
    }
    cout<<endl<<"After Sorting,the result:"<<endl<<endl;           //輸出資料
    for(int i=0;i<10;i++){
        person[i].Print();
    }
}