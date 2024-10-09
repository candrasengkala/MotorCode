#include <iostream>
using namespace std;
/*Tipe data bentukan. Jenisnya ada 3, yakni:
1. array (sekumpulan int)
2. string (sekumpulan char)
3. struct (tipe data buatan sendiri)
4. enumerate (enumerasi, tipe data yang nilainya terbatas pada nilai-nilai yg terlah didefinisikan saja.)
program ini akan mendemonstrasikan bagaimana cara kerja struct dan cara pemakaiannya sehingga kita dapat membuat struktur data sendiri.
 */


int a[10]; //ini deklarasi array dengan panjang 10. arraynya bertipe data integer.


//ingat! "" itu string sementara '' itu char.
int length(int a[]){
    int i = 0;
    while (a[i] != '\0'){ //'\0' and not '/0'.
        i=i+1;
    }
    return i;
}
/*
another way of knowing length
sizeof(a)/sizeof(a[0])
 */

int main(){
    cout << a[0] << '\n';
    for (int i = 0; i<sizeof(a)/sizeof(a[0])/*this tells us about memory size.*/ /*while this still holds true, continue working on the loop.*/; i++){ //nilai_awal, maks, increment.
        cin >> a[i];
        cout << "\n";
    }
    cout << length(a)<<'\n';
    cout<<"{";
    for (int i = 0; i<length(a); i++){
        cout<<a[i]<<" ";
    }
    cout<<"}";
    return 0;
}