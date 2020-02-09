#include <conio.h>
#include <iostream.h>

using namespace std;

struct data{
  char nama[50];
  char alamat[30];
  char jk[20];
  char ntelp[20];
  char tgl[30];
}; data batas[100];
  int a,b,c,d;

int inputdata(){
  cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
  d=0;
  for(c=0;c<b;c++){
  d=d+1;
  cout<<"\nData ke-"<<d<<endl;
  cout<<"Nama\t: ";
  cin>>batas[a].nama;
  cout<<"Alamat\t: ";
  cin>>batas[a].alamat;
  cout<<"Jenis Kelamin\t: ";
  cin>>batas[a].jk;
  cout<<"Nomor Telepon\t: ";
  cin>>batas[a].ntelp;
  cout<<"Tanggal Lahir\t: ";
  cin>>batas[a].tgl;
  a++;
  }
  system("cls");
}

int lihatdata(){
  int i,j;
 cout<<"\n\t========================================================Menampilkan Data====================================================\n\n";
 cout<<"\t============================================================================================================================\n";
 cout<<"\t| No ||\tNama\t\t||\tAlamat\t\t||\tJenis Kelamin\t||\tNomor Telepon\t||\tTanggal Lahir\t|\n";
 j=0;
 for(i=0;i<a;i++){
  j=j+1;
  cout<<"\t============================================================================================================================\n";
  cout<<"|\t "<<j<<" \t||";
  cout<<"\t"<<batas[i].nama<<"\t||";
  cout<<"\t"<<batas[i].alamat<<"\t||";
  cout<<"\t"<<batas[i].jk<<"\t||";
  cout<<"\t"<<batas[i].ntelp<<"\t||";
  cout<<"\t"<<batas[i].tgl<<"\t|";cout<<endl;
  }
  cout<<"\t============================================================================================================================ ";getch();
  getch();
  system("cls");
}

int main(){
  int pilih;
  char w;
 system("cls");
  awal:
  cout<<"\n================================ Aplikasi Biodata Mahasiswa =================================";
  cout<<"\n\t================================ PILIHAN MENU =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Lihat Data";
  cout<<"\n3. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1){
    system("cls");
    inputdata();
    goto awal;
  }
  if(pilih==2){
    system("cls");
    lihatdata();
    goto awal;
  }
  if(pilih==3){
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";
    cin>>w;
    if(w=='y'||w=='Y'){
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************\n";}
    if(w=='n'||w=='N'){
      system("cls");
      goto awal;
    }
  }
  else{
    system("cls");
    cout<<"Pilihan yang anda inputkan salah!!!";
    goto awal;
  }
}