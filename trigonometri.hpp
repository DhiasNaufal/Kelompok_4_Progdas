#include<string>
#include<math.h> 
#include<iostream>

#define PI 3.14
using namespace std;

class trigonometri{
    public:
    void fsin();
    void fcos();
    void ftan();
    void arcsin();
    void arcos();
    void arctan();
};
void trigonometri::fsin(){
    int a;
    cout<<"Masukan besar sudut : "; 
    cin>>a;
    cout<<"sin "<<a<<" = "<<sin(a)<<endl;
}
void trigonometri::fcos(){
    int a;
    cout<<"Masukan besar sudut : "; 
    cin>>a;
    cout<<"cos "<<a<<" = "<<cos(a)<<endl;
}
void trigonometri::ftan(){
    int a;
    cout<<"Masukan besar sudut : "; 
    cin>>a;
    cout<<"tan "<<a<<" = "<<tan(a)<<endl;
}
void trigonometri :: arcsin(){
    int a;
    cout<<"Masukan besar sudut : "; 
    cin>>a;
    cout<<"arcsin "<<a<<" = "<<asin(a)*180.0/PI<<endl;
}
void arccos(){
    int a;
    cout<<"Masukan besar sudut : "; 
    cin>>a;
    cout<<"arcos "<<a<<" = "<<acos(a)*180.0/PI<<endl;
}
void arctan(){
    int a;
    cout<<"Masukan besar sudut : "; 
    cin>>a;
    cout<<"arctan "<<a<<" = "<<atan(a)*180.0/PI<<endl;
}

