#ifndef EVERYCLASSYOUNEEDIDRIGHTHERE_H  
#define EVERYCLASSYOUNEEDIDRIGHTHERE_H 

#include<iostream>

class Point{
    public:

    Point(float=1,float=1);

    void Set(float,float);

    float X;
    float Y;

};

class Triangle{
    public:

    Triangle()=default;
    Triangle(Point,Point,Point);

    void Set(Point,Point,Point);
    void CalculateLeng();
    void CalculateArea();

    Point A;
    Point B;
    Point C;
    float AB;
    float BC;
    float AC;
    float Perimeter;
    float Area;

};

class TriPrism{
    public:

    TriPrism()=default;
    TriPrism(Triangle,float=0);

    void Set(Triangle,float);
    void CalculateSurfaceArea();
    void CalculateVolume();

    Triangle Tri;
    float height;
    float SurfaceArea;
    float Volume;

};

#endif