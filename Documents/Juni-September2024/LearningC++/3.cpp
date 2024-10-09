/*SWITCH. 

This is another form of conditional on C++. It is other than if and else.*/

#include <iostream>
using namespace std;
bool accept(){
    //masukin dari ketikan ke cout, berarti maksudnya input(this is another word for it lmao idk how to explain it)
    cout << "Do you want to proceed (y/n)? \n";
    char answer;
    cin >> answer; //dari cin ditaruh ke answer

    switch(answer){
        case 'y':
        return true;
        case 'n':
        return false; 
        default: //this is "anything else other that is excepted"
            cout << "Sorry, I don't understand that.\n";
            return false;
    }
}
int main(){
    accept();
}