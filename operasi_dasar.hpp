#include<string>
#include<math.h> 
#include<iostream>

using namespace std;


class operasi_dasar {
    public :
        void pertambahan();
        void pengurangan();
        void perkalian();
        void pembagian();
};
void operasi_dasar::pertambahan(){
        int n, sum = 0, i, number;  
        cout <<"Berapa nomor yang ingin kamu tambahkan: ";  
        cin >> n;  
        cout << "masukan angka satu per satu \n";  
        for (i = 1; i <= n; i++){
                cout << "masukan angka ke-"<<i<<" :";
                cin >> number;
                sum = sum + number;
                }
        cout << "\n Hasil penjumlahannya adalah = "<< sum;
}
void operasi_dasar::pengurangan(){
        int a,b;
        cout<<"masukan angka pertama : "; 
        cin>>a; 
        cout<<"masukan angka kedua : "; 
        cin>>b; 
        printf("%d - %d = %d\n", a, b, a-b);
}
void operasi_dasar::perkalian(){
        int a,b;
        cout<<"masukan angka pertama : "; 
        cin>>a; 
        cout<<"masukan angka kedua : "; 
        cin>>b; 
        printf("%d x %d = %d\n", a, b, a*b);
}
void operasi_dasar::pembagian(){
        float a,b;
        cout<<"masukan angka pertama : "; 
        cin>>a; 
        cout<<"masukan angka kedua : "; 
        cin>>b; 
        printf("%d / %d = %d\n", a, b, a/b);
}