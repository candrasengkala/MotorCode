#include <iostream>
using namespace std;

bool askalways(){
    bool x = true; //AWAS! ADA SCOPE. VARIABEL YANG ADA DALAM {} YANG LAIN TIDAK ADA DALAM {} YANG LAIN. MISAL {{}} MAKA YG DALAM TIDAK ADA DALAM YANG LUAR TETAPI YANG LUAR ADA PADA YANG DALAM.
    bool returned;
    while (x == true){
        cout << "do you want to proceed y/n\n"; //cout itu buat ouput. panahnya kedalan karena dia memasukkan ke dalam cout
        char answer;
        cin >> answer; //cin itu buat input
        switch(answer){
            case 'y':
            returned = true;
            x=false;
            break;
            case 'n':
            returned = false;
            x=false;
            break;
            default:
            cout << "wrong input!";
            x=true;
            break;
        }
    }
    return returned;
}

int main(){
    askalways();
}