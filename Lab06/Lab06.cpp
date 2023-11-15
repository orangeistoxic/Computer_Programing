#include<iostream>
#include"EveryClassYouNeedIsRightHere.h"                  //我把所有Class都打包在這裡，這樣對我來說比較好理解

using namespace std;

int main(){
    Point P[2];                                          //三個點
    Triangle T;
    TriPrism TP;

    for(int i=0;i<3;i++){

        string order;                                    //讓輸出變得好看懂而已，不重要

        if(i==0){
            order="First";
        }
        else if(i==1){
            order="Second";
        }
        else {
            order="Third";
        }

        cout<<"Please Enter the "<<order<<" Coordinate."<<endl;

        float x,y;
        cin>>x>>y;

        P[i].Set(x,y);                                  //確認座標
    }

    T.Set(P[0],P[1],P[2]);                              //輸入座標並計算周長跟面積

    float h;

    cout<<"Please Enter the Height of the Triangle Prism."<<endl;

    cin>>h;                                            //高

    TP.Set(T,h);                                       //輸入三角形跟高，並算出表面積跟體積

    cout<<"-----Result-----"<<endl;                    //輸出
    cout<<"The Area of the Triangle is "<<TP.Tri.Area<<" ."<<endl;
    cout<<"The Perimeter of the Triangle is "<<TP.Tri.Perimeter<<" ."<<endl;

    cout<<"The Volume of the Triangle Prism is "<<TP.Volume<<" ."<<endl;
    cout<<"The Surface Area of the Triangle Prism is "<<TP.SurfaceArea<<" ."<<endl;
 
}