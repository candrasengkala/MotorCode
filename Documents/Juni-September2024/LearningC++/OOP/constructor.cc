#include<iostream>
using namespace std;

class CONTOH{
    private:
    int X;//this will be, if no tag is given, by default private.
    public:
    //pembuatan konstruktor. Sebuah fungsi yang gunanya untuk membangun sebuah instance class. Constructor harus sama dengan nama kelas dan tidak memiliki tipe kembalian.
    CONTOH(){
        X = 10;
    }
    CONTOH(int XX){ //kedua di atas adalah constructor. Maka, bila ada constructor ada juga destructor yang tujuanya untuk menghapus suatu instance. Destructor harus dibuat bila digunakan alokasi memori dinamis sehngga tidak
    //terjadi leak.
        X = XX; //ini adalah overloading constructor. Operasi ini valid. (C++ dapat melakukan ini, dideklrasikan dua kali)
    }
    //member function
    void ShowX(){
        cout << "Nilai X: "<<CONTOH::X<<endl; //
    }
};

int main(){
    CONTOH O(10); //instance CONTOH langsung terbentuk dan X langsung terdeklarasikan.
    O.ShowX(); //memanggil fungsi tsb dalam class.
    return 0;
}