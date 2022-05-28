#include<iostream>
#include<math.h> 

//Include file hpp
#include "operasi_dasar.hpp"
#include "trigonometri.hpp"
#include "eksponensial.hpp"
using namespace std;


int main(){
//Membuat Objek dari kelas
operasi_dasar operasi;
  
    float a,b ;

// Tampilan pada Terminal
    cout<<"************************************ Scientific Calculator ********************************\n"; 
    cout<<"-------------------------------------------------------------------------------------------\n"; 
    cout<<"\t\t\t\tPilih operasi yang akan dilakukan:\t\t\t\t\n"; 
    cout<<"-------------------------------------------------------------------------------------------\n"; 
    cout<<"1: Pertambahan\t\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl; 
    cout<<"2: Pengurangan\t\t\t"<<"8: Cos\t\t"<<"\t\t14: Log dengan basis 10"<<endl; 
    cout<<"3: Perkalian\t\t\t"<<"9: Tan\t\t"<<endl; 
    cout<<"4: Pembagian\t\t\t"<<"10: Inverse dari Sin"<<endl; 
    cout<<"5: Pamgkat\t\t\t"<<"11: Inverse dari Cos"<<endl; 
    cout<<"6: Akar Kuadrat\t\t\t"<<"12: Inverse dari Tan"<<endl;

// Switch Case Pilihan operasi yang ingin dijalankan
    int i;
    cout<<"Pilih Operasi yang ingin dilakukan : ";
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
cout<<"Inputnya salah, silahkan coba lagi :D"<<endl;
} 
}
