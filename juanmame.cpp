#include <iostream>
using namespace std;
int main()
{
char nama_siswa[90];
float nilai_keaktifan;
float nilai_tugas;
float nilai_ujian;
double rumus;
cout<<"====================================="<<endl;
cout<<"PROGRAM UNTUK MENGHITUNG NILAI AKHIR"<<endl;
cout<<"====================================="<<endl;
cout<<"Nama siswa      : ";
cin>>nama_siswa;
cout<<"Nilai Keaktifan : ";
cin>>nilai_keaktifan;
cout<<"Nilai ujian     : ";
cin>>nilai_ujian;
cout<<"Nilai tugas     : ";
cin>>nilai_tugas;

rumus=(nilai_keaktifan*0.2)+(nilai_tugas*0.5)+(nilai_ujian*0.3)/3;
cout<<"===================================="<<endl;
cout<<"hasil dari rata rata diatas adalah"<<endl;
cout<<"===================================="<<endl;
cout<<"Nama siswa      :"<<nama_siswa<<endl;
cout<<"Nilai keaktifan : "<<nilai_keaktifan<<endl;
cout<<"Nilai ujian     : "<<nilai_ujian<<endl;
cout<<"Nilai tugas     : "<<nilai_tugas<<endl;
cout<<"Rata rata       : "<<rumus<<endl;

return 0;
}