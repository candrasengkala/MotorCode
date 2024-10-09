/*  Dynamic memory allocation   : Memory allocated at RUN TIME.
    Static memory allocation    : Memory allocated at COMPILE TIME.

    Dynamic memory: new and delete. Eveytime new is inniciated, delete must be written. Otherwise, memory leak will happen and we'll run out of memory.

    Perbedaan memori statis dan dinamis.
    1. Memori statis dialkoasikan, maka sifatnya tetap dan tidak dapat diubah.
    2. Memori dinamis, ukuran memori dapat dikurangi atau ditambah (sementara dalam memori statis ukurannya bergantung kepada besar yg dimasukkan)
    3. Statis-> selesai pake tidak bisa digunakan kembali (at one instance). With dynamic memory, allocation could be deleted.
*/
#include<iostream>
using namespace std;

int main(){
    int *n = new int; //new int is generated during runtime.

    *n = 8; //putting 8 on new int.

    delete n; //free the memory.
    
    int *o;
    o = new int[10]; //10 buah ruang dengan tipe int. 40 bytes. This is array, dynamically. 

    delete o; //we delete the memory [dynamically allocated part].
}