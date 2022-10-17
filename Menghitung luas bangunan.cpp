#include<iostream>
using namespace std;
int main(){
      int sisi,s;
      float alas,tinggi,jari,p,lebar;
      float a,b,t,luas,z,y,d,f,k,m;
      const float phi = 3.142857;


      //persegi

      cout<<"Menghitung luas persegi dengan rumus s x s"<<endl;
      cout<<"Sisi = ";
      cin>>sisi;
      cout<<"HASIL:"<<endl;
      cout<<"Luas persegi = "<<sisi*sisi<<endl;

      //segitiga
      cout<<"Menghitung luas segitiga dengan rumus 1/2 x alas x tinggi"<<endl;
      cout<<"Alas = ";
      cin>>alas;
      cout<<"Tinggi = "
      ;cin>>tinggi;
      cout<<"Luas segitiga = "<<0.5 * alas * tinggi<<endl;

      //lingkaran
      cout<<"Menghitung luas lingkaran dengan rumus phi x r pangkat 2"<<endl;
      cout<<"Jari-jari = "; cin>>jari;
      cout<<"HASIL:"<<endl;
      cout<<"Luas lingkaran = "<<phi * jari * jari<<endl;

      //persgi panjang

      cout<<"Menghitung luas persegi panjang dengan rumus p x l"<<endl;
      cout<<"Masukan panjang (cm) :";
      cin>>p;
      cout<<"Masukan lebar (cm)   :";
      cin>>lebar;
      cout<<"HASIL:"<<endl;
      cout<<"Luas persegi panjang adalah :"<< p * lebar<<endl;

      //trapesium

      cout<<"Menghitung luas trapesium dengan rumus 1/2 x (a + b) x tinggi"<<endl;
      cout<<"Masukan alas A :";
      cin>>a;
      cout<<"Masukan alas B :";
      cin>>b;
      cout<<"Masukan tinggi trapesium :";
      cin>>t;
      cout<<"HASIL:"<<endl;
      luas =(0.5*(a+b)*t);
      cout<<"Luas trapesium adalah :"<<luas<<endl;

      //jajar genjang
       cout<<"Menghitung luas jajar genjang dengan rumus a x t"<<endl;
      cout<<"Masukan alas jajar genjang  :";
      cin>>z;
      cout<<"Masukan tinggi jajar genjang:";
      cin>>y;
       cout<<"HASIL:"<<endl;
      cout<<"Luas jajar genjang adalah :"<< z * y<<endl;

      //belah ketupat
      cout<<"Menghitung luas belah ketupat dengan rumus 1/2 x d1 x d2"<<endl;
      cout<<"d1 = ";
      cin>>d;
      cout<<"d2 = ";
      cin>>f;
      cout<<"Luas segitiga = "<<0.5 * d * f <<endl;

      //layang layang
      cout<<"Menghitung luas layang layang dengan rumus 1/2 x d1 x d2"<<endl;
      cout<<"d1 = ";
      cin>>k;
      cout<<"d2 = ";
      cin>>m;
      cout<<"Luas layang layang = "<<0.5 * k * m <<endl;



}
