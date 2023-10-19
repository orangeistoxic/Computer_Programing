#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

void func1(int ID[],int matrix[][11]);
void func2(int ID[]);
void func3(int matrix[][11]);

int matPow2[11][11];

int main(){

    int ID[11]={2,6,1,2,5,4,7,4,6,1,9};
    int matrix[11][11];

    cout<<"ID is : 2 6 1 2 5 4 7 4 6 1 9 "<<endl;

    func1(ID,matrix);
    func2(ID);
    func3(matrix);
}

void func1(int ID[],int matrix[][11]){

    cout<<"Result1 is :"<<endl;

    for (int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){

            matrix[i][j]=ID[(j+i)%11];
            cout<<setw(3)<<matrix[i][j];
        }

        cout<<endl;

    }

}

void func2(int ID[]){

    cout<<"Result2 is :"<<endl;

    bool chan=true;

    while(chan){

        chan=false;

        for(int i=0;i<=9;i++){
            if(ID[i]>ID[i+1]){

                swap(ID[i],ID[i+1]);
                chan=true;
            }
        }
    }

    for(int i=0;i<=10;i++){

        cout<<setw(3)<<ID[i];
    }
    cout<<endl;

}

void func3(int matrix[][11]){

    cout<<"Result3 is :"<<endl;

    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){

            matPow2[i][j]=0;

            for(int k=0;k<=10;k++){

                matPow2[i][j]+=matrix[i][k]*matrix[k][j];
            }
            cout<<setw(4)<<matPow2[i][j];
        }
        cout<<endl;

    }

}