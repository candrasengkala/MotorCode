#include<iostream>
/*class Manusia {

};*/
//INI ADALAH KELAS Yang akan digunakan untuk membuat templeate sebuah manusia (instancesnya adalah Rizmi). Sebuah kelas membungkus data dan fungsi2 tertentu
//yang berkaitan dengan suatu objek ke dalam satu kelas khusus. Bila kita punya kelas mobil, maka seluruh daata dan perilaku yang dimiliki ol.eh mobil akan dibungkus

/*File ini akan membahas pembuatan suatu kelas*/
//dalam kelas tersebut.

/*
Sebuah kelas data adalah tipe data, ketika variabelnya dideklarasikan maka akan terbentuk objek.
*/
//contoh

#include <iostream>
using namespace std;

class CONTOH{
    int X; //ini sifatnya private, hanya bisa diakses oleh instances itu sendiri (tidak bisa diutak-atik OLEH KELAS TURUNAN). BACA: TINGKAT AKSES
    public:
    //mendeklarasikan fungsi set_x();
    void set_X (int XX);//ini publik, kita boleh akses
    //mendeklarasikan fungsi get_X()
    int get_X();
};

void CONTOH::set_X(int XX){
    X = XX;
}

//implementasi fungsi2 tersebut dilakukan dengan cara
int CONTOH::get_X(){ //:: implies scope.
    return X;
}
//fungsi utama

int main(){
    CONTOH ob; //we create an instance in here.
    ob.set_X(100); //accessing set_X in ob. Extracts value related to an object.
    cout << ob.get_X();
}