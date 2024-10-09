//preprocessing
#include <iostream>
using namespace std; //std is global in here
//membuat fungsi dengan nama contoh
//dalam program ini, terdapat variabel static local
int contoh(){
    static auto a = 0; //setiap kali a dipanggil, nilai a bukanlah 0, tetapi nilai a terakhir yang merupakan hasil operasi.
    a = a + 10;
    return a;
}
int main(){
    int x, y,z; //deklarasi 3 variabel di waktu bersamaan.
    x = contoh();
    y = contoh();
    z = contoh();

    cout << "Nilai pada pemanggilan pertama : "<<x<<"\n"; //"dimasukkan ke cout secara bertahap dari yang paling kiri terlebih dahulu"
    cout << "Nilai pada pemanggilan kedua   :"<<y<<endl;
    cout << "Nilai pada pemanggilan ketiga  :"<<z<<endl;
    return 0; //add this, don't forget. it must return something.
    /*
    hasil
    Nilai pada pemanggilan pertama : 10
    Nilai pada pemanggilan kedua   : 20
    Nilai pada pemanggilan ketiga  : 30
    
    -E                       Preprocess only; do not compile, assemble or link.
    -S                       Compile only; do not assemble or link.
    -c                       Compile and assemble, but do not link.
    -o <file>                Place the output into <file>.
    */
}