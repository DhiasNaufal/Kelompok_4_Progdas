#include<string>
#include<math.h> 

using namespace std;

class eksponensial {
    public :
    void pangkat();
    void akar_kuadrat();
    void flog();
    void log_basis_10();
};
void eksponensial :: pangkat(){
    int a, b;
    cout<<"masukan angka yang ingin dipangkatkan : "; 
    cin>>a; 
    cout<<"masukan pangkat : "; 
    cin>>b; 
    cout<<"Hasilanya pangkatnya = "<<pow(a,b)<<endl; 
}
void eksponensial :: akar_kuadrat(){
    int a;
    cout<<"masukan angka yang ingin diakar kuadratkan : "; 
    cin>>a; 
    cout<<"Hasil akarnya = "<<sqrt(a)<<endl; 
}
void eksponensial :: flog(){
    int a, b;
    cout<<"masukan angka : ";
    cin>>a;
    cout<<"Hasil lognya = "<<log(a)<<endl;
}
void eksponensial :: log_basis_10(){
    int a;
    cout<<"masukan angka : "; 
    cin>>a; 
    cout<<" Hasil lognya = "<<log10(a)<<endl; 
}
