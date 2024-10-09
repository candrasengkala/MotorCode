#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime> //this is going to be used for the random number seed.
using namespace std;
//rand generates value between 0 and RANDMAX (which is a constant defined somewhere.) Consider this, if the value that is generated is so high, we can simplu mod it by 100 to get
//values between 0-99 (sisa 100 itu tidak mungkin, just imagine it. Maka, % dengan angka apapun itu menjadi batas rand(). rand()%5 (0-4). Lantas, bagaimana untuk rand() (1-5)? Tambah saja satu)
//kalau 0-5?. Bingung bukan?
//MASALAHNYA, ITU SELALU BILANGAN BULAT. BILA KITA INGIN ADA BILANGAN DESIMAL. DENGAN TIPE DATA, KATAKANLAH, DOUBLE. MAKA KITA PERLU bagi dengan RANDMAX.


double dartthrow(const double n){
    srand(time(0)); //has to be in one scope with rand. rand is the mother.
    double dartsx;
    double dartsy;
    int count = 0;
    double a;
    for (int i = 0; i<n; i++){
        dartsx = (double) rand()/RAND_MAX; //(double) is type conversion.
        dartsy = (double) rand()/RAND_MAX;
        double distance; //counts distance from O (0,0) of a particular dart.
        distance = sqrt(dartsx*dartsx + dartsy*dartsy); //bruh. tidak perlu dideklarasikan lagi lmao.
        if (distance <= 1){
            count++;
        }
        a  = 4*count/n;
    }
    return a;
}

int main(){
    cout << "Insert amount of darts: ";
    unsigned int n;
    cin >> n;
    cout << dartthrow(n);
}