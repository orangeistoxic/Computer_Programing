#include<iostream>
#include<cmath>
#include"EveryClassYouNeedIsRightHere.h"

using namespace std;

Point::Point(float x,float y){                                 //Constructor，不過用不太到，因為主要輸入變數都在Set，這裡僅僅是當預設函式使用
    X=x;
    Y=y;
}

void Point::Set(float x,float y){                              //Set，主要輸入與計算的地方
    X=x;
    Y=y;
}

Triangle::Triangle(Point one,Point two,Point three){          //Constructor，不過用不太到，因為主要輸入變數都在Set，這裡僅僅是當預設函式使用
    A=one;
    B=two;
    C=three;
}

void Triangle::Set(Point one,Point two,Point three){          //Set，主要輸入與計算的地方
    A=one;
    B=two;
    C=three;
    CalculateLeng();
    CalculateArea();
}

void Triangle::CalculateLeng(){                              //算各種長度
    AB=sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
    BC=sqrt(pow(C.X-B.X,2)+pow(C.Y-B.Y,2));
    AC=sqrt(pow(A.X-C.X,2)+pow(A.Y-C.Y,2));
    Perimeter=AB+BC+AC;
}

void Triangle::CalculateArea(){                             //用海龍公式算面積
    float s=Perimeter/2;
    Area=sqrt(s*(s-AB)*(s-BC)*(s-AC));
}

TriPrism::TriPrism(Triangle tri,float h){                   //Constructor，不過用不太到，因為主要輸入變數都在Set，這裡僅僅是當預設函式使用
    Tri=tri;
    height=h;
}

void TriPrism::Set(Triangle tri,float h){                  //Set，主要輸入與計算的地方
    Tri=tri;
    height=h;
    CalculateSurfaceArea();
    CalculateVolume();
}

void TriPrism::CalculateSurfaceArea(){                     //算表面積
    SurfaceArea=Tri.Perimeter*height;
}

void TriPrism::CalculateVolume(){                          //算體積
    Volume=Tri.Area*height;
}