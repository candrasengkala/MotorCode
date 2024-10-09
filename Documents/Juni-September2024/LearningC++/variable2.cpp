#include <iostream>
using namespace std;

int Hitung(register int M, register int e){
    register int temp;
    temp = 1;
    for (;e;e--){
        temp = temp * M;
    }
    return temp;
}
//the thing about C++17 is that it seems to not allow register to be used in this manner. Thus, 'add -Wno-register to allow this usage. (idk what it means)
int main(){
    int X;
    X = Hitung(5,3);
    cout<<X<<"\n";
    return 0;
}