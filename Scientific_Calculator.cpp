#include<iostream>
#include<math.h> 
#include "operasi_dasar.hpp"
#include "trigonometri.hpp"
using namespace std;
#define PI 3.14

int main(){
    operasi_dasar operasi;
    int i;
    float a,b ;
    cout<<"******************** Scientific Calculator ******************\n"; 
    cout<<"-------------------------------------------------------------\n"; 
    cout<<"\t\tPilih operasi yang akan dilakukan:\t\t\t\t\n"; 
    cout<<"-------------------------------------------------------------\n"; 
    cout<<"1: Pertambahan\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl; 
    cout<<"2: Pengurangan\t\t"<<"8: Cos\t\t"<<"\t\t14: Log dengan basis 10"<<endl; 
    cout<<"3: Perkalian\t\t\t"<<"9: Tan\t\t"<<endl; 
    cout<<"4: Pembagian\t\t\t"<<"10: Inverse dari Sin"<<endl; 
    cout<<"5: Exponen\t\t\t"<<"11: Inverse dari Cos"<<endl; 
    cout<<"6: Akar Kuadrat\t\t\t"<<"12: Inverse dari Tan"<<endl;
    pilihan :
    cout<<"Enter the function that you want to perform : ";
    cin>>i;
    switch(i)
    { 
        case 1: 
        break; 
        case 2:
        break; 
        case 3:
        break; 
        case 4: 
        break; 
        case 5: 
        break; 
        case 6: 
        break; 
        case 7: 
        break; 
        case 8: 
        break; 
        case 9:
        break; 
        case 10: 
        break; 
        case 11:
        break; 
        case 12:
        break; 
        case 13:
        break; 
        case 14: 
        break; 
default: 
cout<<"Inputnya salah, silahkan pilih lagi :D"<<endl;
goto pilihan;
} 
}
