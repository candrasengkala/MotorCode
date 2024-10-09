//ini adalah demonstrasi mengenai konstruktor struct dan enumerate. Bedanya adalah, enumereate telah tersedia jenis2 data spesifik, struct tidak.


//STURCT is a class whose members are public by-default.
#include <iostream>
#include<cstring>
using namespace std;
struct SISWA{
    char NIS[9];
    char Nama[25];
    char Alamat[20];
    char Kota[15];
}; //don't forget this ;

/* We have just created a datatype. Remember, we have not created its instances. We have to create its instance first*/
/*an instance of struct is initialized by*/
int main(){
    SISWA ahmad = {
        "12345678",
        "Bimo Haryo Hanggoro",
        "Dago",
        "Bandung"
    }; //separator that is used is , (comma) asnd not semicolon.
    //we can overwrite it using as follows.
    cout << ahmad.Alamat << "\n";
    return 0;
    }