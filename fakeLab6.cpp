#include<iostream>
#include<cmath>

using namespace std;

int main(){

    class Point{
        public:
        Point(float x=1,float y=1){
            X=x;
            Y=y;
        }
        void Set(float x,float y){
            X=x;
            Y=y;
        }
        float X;
        float Y;

    };

    
    class Triangle{
        public:

        Triangle()=default;
        Triangle(Point one,Point two,Point three){
            A=one;
            B=two;
            C=three;
        }

        void Set(Point one,Point two,Point three){
            A=one;
            B=two;
            C=three;
        }

        void CalculateLeng(){
            AB=sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
            BC=sqrt(pow(C.X-B.X,2)+pow(C.Y-B.Y,2));
            AC=sqrt(pow(A.X-C.X,2)+pow(A.Y-C.Y,2));
            Perimeter=AB+BC+AC;
        }

        void  CalculateArea(){
            float s=Perimeter/2;
            Area=sqrt(s*(s-AB)*(s-BC)*(s-AC));
        }

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
        TriPrism(Triangle tri,float h=0){
            Tri=tri;
            height=h;
        }

        void Set(Triangle tri,float h){
            Tri=tri;
            height=h;
        }

        void CalculateSurfaceArea(){
            SurfaceArea=Tri.Perimeter*height;
        }

        void CalculateVolume(){
            Volume=Tri.Area*height;
        }

        Triangle Tri;
        float height;
        float SurfaceArea;
        float Volume;
    };

}