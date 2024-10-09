//Promotion -> Smaller type to bigger type.
//Demotion -> opposite of promotion
#include<iostream>
using namespace std;

void sum(const int a=0, const int b=0, const int c=0, const int d=0);

int main(){
    sum(3, 5, 7);
}

void sum(const int a, const int b, const int c, const int d){ //tidak perlu dituliskan kembali default value di sini (saat pendefinisian).
    cout << a+b+c+d;
}

