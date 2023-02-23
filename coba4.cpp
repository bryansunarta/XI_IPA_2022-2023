#include <iostream>
using namespace std;

class siswa{
    public:
    int nisn;
    string nama;
    float nilai;
    
    void printbaru(){
        cout<<"Masukkan NISN = ";cin>>nisn;
        cout<<"Masukkan Nama = ";cin>>nama;
        cout<<"Masukkan Nilai = ";cin>>nilai;
    }
    void printdata(){
        cout<<"NISN = "<<nisn<<endl;
        cout<<"Nama = "<<nama<<endl;
        cout<<"Nilai = "<<nilai<<endl;
    }
};

    class guru{
    public:
    int nama;
    float umur;
    string matapelajaran;
    
    void printhanyar(){
        cout<<"Masukkan Nama Guru = ";cin>>nama;
        cout<<"Masukkan Umur = ";cin>>umur;
        cout<<"Masukkan Mata Pelajaran = ";cin>>matapelajaran;
    }
    void printingfo(){
        cout<<"Nama = "<<nama<<endl;
        cout<<"Umur = "<<umur<<endl;
        cout<<"Mata Pelajaran = "<<matapelajaran<<endl;\
    }
    };
    
int main()
{
    int angka;
    cout<<"Masukkan angka 1 jika murid dan angka 2 jika guru =";cin>>angka;
    if (angka == 1){
    siswa coba;
   coba.printbaru();
   coba.printdata();
    }
   
   else if (angka == 2){
   guru weiz;
   weiz.printhanyar();
   weiz.printingfo();
   }
    return 0;
}
